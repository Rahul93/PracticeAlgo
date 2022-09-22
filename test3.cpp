
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>>nodes, vector<int>color, int currNode){
     bool ans = true;
    for(int i=0;i<color.size();i++){
        if(nodes[currNode][i]){
            if(color[i] == -1){
                color[i] = !color[currNode];
                ans = ans && dfs(nodes, color, i);
            } else {
                if(color[i] == color[currNode]){
                    return false;
                }
            }
        }
    }
    return ans;
}

int main() {
    int t,n,edges, a1,a2,m,count=1;

    cin >> t;
    while(t--){
        bool flag = false;
        cin >> n >> m;
        vector<vector<int>> nodes(n+1, vector<int>(n+1,0));
        for(int i = 0; i<m;i++){
            cin >> a1 >> a2;
            nodes[a1][a2] = 1;
            nodes[a2][a1] = 1;
        }

        vector<int>color(n+1, -1);
        cout <<"Scenario #"<<count<<":"<<endl;
        for(int i=1;i<n+2;i++){
            if(color[i] == -1){
                color[i] = 1;
                cout << i<<",";
                if(!dfs(nodes, color, i)){
                    flag = true;
                    break;
                }
            }
        }
        if(flag) {
            cout << "Suspicious bugs found!";
        } else {
            cout << "No suspicious bugs found!";
        }
        cout << endl;
        count++;
    }
}
