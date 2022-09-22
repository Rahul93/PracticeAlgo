
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<pair<long long,long long> > >dp(5001, vector<pair<long long,long long> >(5001, make_pair(-1, -1)));
bool isPalindrome(string &s) {
    long long i=0,j=s.length()-1;
    while(i<j) {
        if(s[i] != s[j])
            return false;
        i++;j--;
    }
    return true;
}

pair<long long, long long> countPalindromes(string &s, long long index, long long n, long long k) {
    long long ans = 0, count=0;
    string s1,s2;
    if(dp[index][k].first != -1) {
        return dp[index][k];
    } else {
        if(n-1 == k){
            dp[index][k] = make_pair(n,1);
            return dp[index][k];
        } else if(k==0){
            ans = (isPalindrome(s) ? 1 : 0);
            dp[index][k] = make_pair(ans,1);
            return dp[index][k];
        }
        else {
            for(long long i=1;i<=n-k;i++) {
                s1 = s.substr(0, i);
                s2 = s.substr(i,n-i);
                pair<long long, long long>r = countPalindromes(s2, i+index, n-i,k-1);
                if(isPalindrome(s1)){
                    ans += ((r.second)%1000000007+(r.first)%1000000007)%1000000007;
                } else {
                    ans += (r.first)%1000000007;
                }
                count += (r.second)%1000000007;
            }
            dp[index][k] = make_pair(ans, count);
            return dp[index][k];
        }
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long k,n;
    string s;
    cin >> n;
    cin >> k;
    cin >> s;
    if(k >= n){
        cout << "0";
    } else {
        cout << (countPalindromes(s, 0, n, k).first)%1000000007;
    }
}

