#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<vector<int> > dp(6102, vector<int>(6102, 0));
/*int lcs(string &s1, string &s2, int i, int j, int &len) {
    if(i == len || j == len) {
        return 0;
    }
    if(!dp[i][j]) {
        if(s1[i] == s2[j]) {
            dp[i][j]= 1+lcs(s1,s2,i+1,j+1, len);
        } else {
            dp[i][j]= max(lcs(s1,s2,i+1,j, len), lcs(s1,s2,i,j+1, len));
        }
    }
    return dp[i][j];

}*/
int lcs(string &X, string &Y)
{
    int m = X.length(), n = Y.length();
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;

            else if (X[i-1] == Y[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;

            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[m][n];
}
void reverse(string &s) {
    int len = s.length();
    int i=0,j=len-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;j--;
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,len;
    string s,rs;
    cin >> t;

    while(t--) {
        cin >> s;
        len = s.length();
        rs = s;
        reverse(rs);
        cout << s.length()-lcs(s,rs)<<endl;
    }
}
