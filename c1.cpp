
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s) {
    int i=0,j=s.length()-1;
    while(i<j) {
        if(s[i] != s[j])
            return false;
        i++;j--;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,len;
    string s,s1,s2,fs;
    cin >> t;
    while(t--) {
        cin >> s;
        if(isPalindrome(s)){
            cout << "YES"<<endl;
        } else {
            bool flag = false;
            len = s.length();
            for(i=1;i<len-1;i++) {
                s1 = s.substr(0, i);
                s2 = s.substr(i,len-i);
                fs = s2+s1;
                if(isPalindrome(fs)) {
                    cout << "YES"<<endl;
                    flag = true;
                    break;
                }
            }
            if(!flag)
                cout << "NO"<<endl;
        }

    }
}
