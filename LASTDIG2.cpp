#include<bits/stdc++.h>
using namespace std;
int strtodigit(string s, int last_digits) {
    int size = s.length(),ans=0;int index = size-last_digits;
    while(index >= 0 && index < size){ans += s[index]-'0';ans*=10;index++;}
    ans = ans/10;return ans;
}
int main() {
vector<vector<int>>hash = {{0}, {1},{2,4,8,6},{3,9,7,1},{4,6},{5},{6},{7,9,3,1},{8,4,2,6},{9,1}};
int t,na,nb;string a,b;cin >> t;
while(t--) {
 cin >> a >> b;na = strtodigit(a, 1);
 if(b.length() == 1) {
    if(b[0] == '0'){cout<< 1<<endl;continue;}
    else{nb = b[0] - '0';}
 } else {nb = strtodigit(b, 2);}
 cout << hash[na][(nb-1)%(hash[na].size())]<<endl;
}
}
