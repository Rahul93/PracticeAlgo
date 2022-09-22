#include<bits/stdc++.h>
using namespace std;

int max_recur(int h, int a, bool type, vector<vector<int>> &dp) {
    int ans;
    if(h<=0 || a<=0){
        return 0;
    } else {
        if(type){
            if(dp[h][a] == -1){
                ans =  max(max_recur(h-5, a-10,false,dp), max_recur(h-20, a+5,false,dp))+1;
                dp[h][a] = ans;
            }else{
                ans = dp[h][a];
            }
        } else {
            ans = max_recur(h+3,a+2,true,dp)+1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,h,a;

    cin >> t;

    while(t--) {
        cin >> h >> a;
        vector<vector<int>>dp(2000, vector<int>(2000, -1));
        cout << max_recur(h+3,a+2,true,dp)<<"\n";
    }
}
