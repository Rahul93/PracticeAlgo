#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {

        string s,s_bck;
        cin >> s;
        s_bck = s;
        reverse(s.begin(),s.end())
        if(s == s_bck){
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << "\n";
    }
}
