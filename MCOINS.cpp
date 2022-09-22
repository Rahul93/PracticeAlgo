#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,l,m,input, output;
    cin >> k >>l>>m;
    while(m--) {
        vector<bool>dp(input+1);
        dp[0] = true;
        dp[1] = true;
        for(int i=2;i<input+1;i++) {
            if(i <k) {
                dp[i]= !dp[i-1];
            } else if(i > k && i < l) {
                dp[i] = !(dp[i-1] && dp[i-k]);
            } else if(i > l) {
                dp[i] = !(dp[i-1] && dp[i-k] && dp[i-l]);
            } else {
                dp[i] = true;
            }
        }
        if(dp[input])
            cout << "A";
        else
            cout << "B";
    }

}
