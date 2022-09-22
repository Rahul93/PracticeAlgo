
#include<iostream>
using namespace std;

bool dfs(vector<int, int>nodes, vector<bool>visited, vector<bool>color, int currNode){
     bool ans = true;
     visited[currNode]= true;
    for(int i=0;i<visited.size();i++){
        if(nodes[currNode][i] && !visited[i]){
            if(color[i] == -1){
                color[i] = !color[currNode];
            } else {
                if(color[i] == color[currNode]){
                    return false;
                }
            }
            ans = ans && dfs(nodes, visited, color, i);
        }
    }
    return ans;
}

int main() {

    int t,n,edges, a1,a2;
    cin >> t;
    while(t--){
        cin >> n << m;
        vector<int, int> nodes(n, vector<int>(n,0));
        for(int i = 0; i<m;i++){
            cin >> a1 >> a2;
            nodes[a1][a2] = 1;
            nodes[a2][a1] = 1;
        }

        vector<bool>visited(n, false);
        vector<int>color(n, -1);
        color[a1] = 1
        if(dfs(nodes visited, color, a1)){
            cout << "yo";
        } else {
            cout << "false";
        }
        cout << endl;
    }


}
