#include<bits/stdc++.h>
using namespace std;


int count(string &s1, string &s2) {
    int count = 0;
    int i=0;
    while(i < s1.length() && i < s2.length() && s1[i] == s2[i]){
        count++;i++;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        int len = s.length();
        vector<string> ss(len);
        string firstLetter(1,s[len-1]);
        ss[0] = firstLetter;
        for(int i=1;i<len;i++) {
            ss[i] = s[len-1-i]+ss[i-1];
        }
        sort(ss.begin(), ss.end());
        int duplicates=0;
        for(int i=1;i<len;i++) {
            duplicates += count(ss[i],ss[i-1]);
        }
        cout << duplicates << endl;
        cout << ((len*(len+1))/2)-duplicates<<"\n";
    }
}
