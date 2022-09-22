#include<bits/stdc++.h>
using namespace std;

int recur(vector<vector<int>> &fare, vector<vector<int>> &dp, int i, int j, int n, int m) {
    if(i == n){
        return 0;
    } else {
        if(dp[i][j] == -1) {
            if(j == 0){
                dp[i][j] = fare[i][j] + min(recur(fare, dp, i+1, j+1, n, m), recur(fare, dp, i+1, j, n, m));
            } else if(j == m-1) {
                dp[i][j] = fare[i][j] + min(recur(fare, dp, i+1, j-1, n, m), recur(fare, dp, i+1, j, n, m));
            } else {
                dp[i][j] = fare[i][j] + min(min(recur(fare, dp, i+1, j-1, n, m), recur(fare, dp, i+1, j, n, m)), recur(fare, dp, i+1, j+1, n, m));
            }

        }
        return dp[i][j];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cin >> n >> m;
    vector<vector<int>> fare(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m, -1));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> fare[i][j];
        }
    }
    int minFare = INT_MAX;
    for(int i=0;i<m;i++) {
        int ans = recur(fare, dp, 0,i, n,m);
        if(ans < minFare)
            minFare = ans;
    }
    cout << minFare;
}

