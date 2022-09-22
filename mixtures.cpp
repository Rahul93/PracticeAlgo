#include<bits/stdc++.h>
using namespace std;


void min_smoke(vector<int> &a, vector<vector<pair<int, int>>> &dp) {
    int n = a.size();
    for(int i=0;i<n;i++) {
        dp[i][i] = make_pair(a[i],0);
    }
    for(int diff=1;diff<n;diff++) {
        for(int i=0;i<n-diff;i++){
            int j = i+diff;
            pair<int, int> min_cost = make_pair(0,INT_MAX);
            for(int k=i+1;k<=j;k++) {
                pair<int,int> curr = make_pair((dp[i][k-1].first+dp[k][j].first)%100, (dp[i][k-1].first*dp[k][j].first + dp[i][k-1].second+dp[k][j].second));
                if(min_cost.second > curr.second) {
                    min_cost = curr;
                }
            }
            dp[i][j] = min_cost;
        }
    }
}

int main() {

    int n;
    while(cin >> n) {
        vector<int>input(n);
        for(int i=0;i<n;i++) {
            cin >> input[i];
        }
        vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(n, make_pair(-1, -1)));
        min_smoke(input, dp);
        cout << dp[0][n-1].second << "\n";
    }
}
