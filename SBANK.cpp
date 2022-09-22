#include<bits/stdc++.h>

using namespace std;

int main() {
    int t,n;
    string s;
    cin >> t;
    while(t--) {
        map<string, int>input;
        cin >> n;
        cin.ignore();
        while(n--) {
            getline(cin,s);
            if(input.count(s) > 0){
                input[s]++;
            } else {
                input[s] = 1;
            }
        }
        for( auto it = input.begin(); it != input.end(); ++it )
        {
          int value = it->second;
          string key = it->first;
          cout << key << " "<<value<<"\n";
        }
        cout << "\n";
    }
}
