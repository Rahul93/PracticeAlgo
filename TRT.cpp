#include<bits/stdc++.h>
using namespace std;

long long int max_revenue(vector<long long int> &a, int start, int end, int age, vector<vector<long long int> > &dp) {

    if(start == end){
        dp[start][end] = a[start]*age;
    } else {
        if(dp[start][end] == -1) {
            long long int ans1 = max_revenue(a, start+1, end, age+1, dp);
            long long int ans2 = max_revenue(a, start, end-1, age+1, dp);

            dp[start][end] = max(ans2+a[end]*age, ans1+a[start]*age);
        }
    }
    return dp[start][end];
}

int main() {

    int len;
    cin >> len;
    vector<long long int>a(len);
    vector<vector<long long int> >dp(2001, vector<long long int>(2001, -1));
    for(int i=0;i<len;i++)
        cin >> a[i];
    cout << max_revenue(a,0,len-1, 1, dp);
}
