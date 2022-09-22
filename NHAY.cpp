#include<bits/stdc++.h>
using namespace std;

vector<int>lps(string &s) {
    int len = s.length();
    vector<int>dp(len, 0);
    for(int i=1;i<len;i++) {
        if(s[dp[i-1]] == s[i]) {
            dp[i] = dp[i-1]+1;
        } else if(s[0] != s[i]) {
            dp[i] = 0;
        } else if(s[i] == s[i-1]) {
            dp[i] = dp[i-1];
        }
    }
    return dp;
}

vector<int> kmp(string input, string pattern) {
    vector<int>dp = lps(pattern);
    vector<int>idx;
    int len = input.length(), count=0,j=0,plen = pattern.length();
    for(int i=0; i<len; i++) {
        if(pattern[j] == input[i]){
            j++;
            if(j == plen) {
                idx.push_back(i-plen+1);
                j=dp[j-1];
            }
        } else {
            if(j>0) {
            	j=dp[j-1];
            	i--;
            }

        }
    }
    return idx;
}

int main() {

    string input,pattern;
    int len;
    while(cin >> len) {
        cin >> pattern >> input;
        vector<int> idx = kmp(input, pattern);
        if(!idx.empty()) {
        	for(int i=0;i<idx.size();i++)
        	cout<<idx[i]<<"\n";
        } else {
        	cout << "\n";
        }
    }
}
