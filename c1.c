
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s) {
    int i=0;j=s.length()-1;
    while(i<j) {
        if(A[i] != A[j])
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
            len = s.length();
            for(i=1;i<len-1;i++) {
                s1 = s.substr(0, i);
                s2 = s.substr(i,len-i);
                s3 = s2+s1;
                if(isPalindrome(s3)) {
                    cout << "YES"<<endl;
                    break;
                }
            }
            cout << "NO"<<endl;
        }

    }
}
