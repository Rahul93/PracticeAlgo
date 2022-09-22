#include<bits/stdc++.h>
using namespace std;

int dfs(vector<vector<char>> &input, int x, int y, vector<vector<int>> &visited, int m, int n){
    char curr = input[x][y];
    int ans=1;
    visited[x][y] = 1;
    if(curr != 'z'){
        char search = 'a'+(curr-'a'+1);
        if(x > 0) {
            if(input[x-1][y] == search && !visited[x-1][y]){
                ans = max(ans, 1+dfs(input,x-1,y,visited,m,n));
            }
        }
        if(y > 0) {
            if(input[x][y-1] == search && !visited[x][y-1]){
                ans = max(ans, 1+dfs(input,x,y-1,visited,m,n));
            }
        }
        if(x < m-1){
            if(input[x+1][y] == search && !visited[x+1][y]){
                ans = max(ans, 1+dfs(input,x+1,y,visited,m,n));
            }
        }
        if(y < n-1) {
            if(input[x][y+1] == search && !visited[x][y+1]){
                ans = max(ans, 1+dfs(input,x,y+1,visited,m,n));
            }
        }
        if(x > 0&& y > 0) {
            if(input[x-1][y-1] == search && !visited[x-1][y-1]){
                ans = max(ans, 1+dfs(input,x-1,y-1,visited,m,n));
            }
        }
        if(x > 0 && y < n-1) {
            if(input[x-1][y+1] == search && !visited[x-1][y+1]){
                ans = max(ans, 1+dfs(input,x-1,y+1,visited,m,n));
            }
        }
        if(x < m-1 && y > 0) {
            if(input[x+1][y-1] == search && !visited[x+1][y-1]){
                ans = max(ans, 1+dfs(input,x+1,y-1,visited,m,n));
            }
        }
        if(x < m-1 && y < n-1) {
            if(input[x+1][y+1] == search && !visited[x+1][y+1]){
                ans = max(ans, 1+dfs(input,x+1,y+1,visited,m,n));
            }
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m,n;
    cin >> m >> n;
	int count =1;
    while(m) {
        vector<vector<char>> input(m, vector<char>(n));
        vector<pair<int,int>>start;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                cin >> input[i][j];
                if(input[i][j] == 'A'){
                    start.push_back(make_pair(i,j));
                }
            }
        }
        int ans = 0, maxAns=INT_MIN;
        for(auto itr = start.begin(); itr != start.end(); itr++) {
            vector<vector<int>> visited(m, vector<int>(n, 0));
            ans = dfs(input, itr->first, itr->second, visited,m,n);
            if(maxAns < ans)
            	maxAns = ans;
        }
        if(maxAns < ans)
        	maxAns = ans;
        cout <<"Case "<<count<<": "<< maxAns<<"\n";
        count++;
        cin >> m >> n;
    }
}
