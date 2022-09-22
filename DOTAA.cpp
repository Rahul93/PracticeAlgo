#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n,m,d,hero,survive=0;
        cin >> n >> m>>d;
        while(n--){
            cin >> hero
            survive += hero/m;
            if(!hero%m) {
                survive -= 1;
            }
        }
        if(survive >= m){
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << "\n";
    }
}
