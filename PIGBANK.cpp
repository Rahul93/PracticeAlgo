#include<bits/stdc++.h>
using namespace std;
int main() {

    int t,start,end,n;
    cin >> t;
    while(t--) {
        cin >> start >> end;
        int W = end-start;
        cin >> n;
        vector<int>dp(W+1, 10001);
        vector<int>wt(n),val(n);
        for(int i=0;i<n;i++)
            cin >> val[i] >> wt[i];
        for (int i=0; i<=W; i++)
            for (int j=0; j<n; j++)
                if (wt[j] <= i)
                    dp[i] = min(dp[i], dp[i-wt[j]]+val[j]);
        if(dp[W] != 10001)
            cout << "The minimum amount of money in the piggy-bank is "<<dp[W]<<".";
        else
            cout << "This is impossible.";
        cout << "\n";
    }

}
