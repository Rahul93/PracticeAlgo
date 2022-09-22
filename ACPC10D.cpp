#include<bits/stdc++.h>
using namespace std;

int recur(vector<vector<int>> &input, int x,int y, vector<vector<int>> &dp) {
    int len = input.size(),ans;
    if(x != len-1) {
        if(dp[x][y] == INT_MIN) {
            if(y == 1) {
                ans = input[x][y] + min(min(recur(input, x+1, y-1, dp), recur(input, x+1, y+1, dp)), min(recur(input, x+1, y, dp), recur(input, x, y+1, dp)));
            } else if(y==0) {
                ans = input[x][y] + min(min(recur(input, x+1, y+1, dp), recur(input, x+1, y, dp)), recur(input, x,y+1,dp));
            } else {
                ans = input[x][y] + min(recur(input, x+1, y-1, dp), recur(input, x+1, y, dp));
            }
            dp[x][y] = ans;
        }
    }else {
            if(y == 0){
                dp[len-1][0] = input[len-1][0]+input[len-1][1];
            } else if(y == 1){
                dp[len-1][1] = input[len-1][1];
            } else {
                dp[len-1][2] = INT_MAX;
            }


    }
    return dp[x][y];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int count = 1;
    while(n) {
        vector<vector<int>> input(n, vector<int>(3));
        vector<vector<int>> dp(n, vector<int>(3, INT_MIN));
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++) {
                cin >> input[i][j];
            }
        }

        cout <<count<<". "<< recur(input, 0,1, dp)<<"\n";
        count++;
		cin >> n;
    }
}
