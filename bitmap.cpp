#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,m,n;
    cin >> t;
    while(t--) {
		cin>>m>>n;
        vector<vector<int> > arr(m, vector<int>(n)), dp(m, vector<int>(n, INT_MAX-1)), rowdp(m, vector<int>(n, INT_MAX-1));
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                scanf("%1d", &arr[i][j]);
            }
        }
        int curr_dis = -1;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(arr[i][j] == 1) {
                    rowdp[i][j] = 0;
                    curr_dis = 0;
                } else if(curr_dis != -1) {
                    curr_dis++;
                    rowdp[i][j] = curr_dis;
                }
            }
            curr_dis = -1;
            for(int j=n-1;j>=0;j--) {
                if(arr[i][j] == 1) {
                    curr_dis = 0;
                } else if(curr_dis != -1) {
                    curr_dis++;
                    rowdp[i][j] = curr_dis;
                }
            }
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j < n;j++) {
                cout << rowdp[i][j];
                if(j != n-1) {
                	cout<<" ";
                }
            }
            cout << "\n";
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                dp[i][j] = rowdp[i][j];
                if(i != 0) {
                    dp[i][j] = min(dp[i-1][j]+1, dp[i][j]);
                }
                if(i < m-1) {
                    dp[i][j] = min(dp[i+1][j]+1, dp[i][j]);
                }
            }

        }
         for(int i=m-1;i>=0;i--) {
            for(int j=0;j<n;j++) {

            if(i != 0) {
                dp[i][j] = min(dp[i-1][j]+1, dp[i][j]);
            }
            if(i < m-1) {
                dp[i][j] = min(dp[i+1][j]+1, dp[i][j]);
            }
        }

        }

        for(int i=0;i<m;i++) {
            for(int j=0;j < n;j++) {
                cout << dp[i][j];
                if(j != n-1) {
                	cout<<" ";
                }
            }
            cout << "\n";
        }
    }
}
