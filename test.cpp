#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> n;
        long long incl=0,excl=0,excl_max=0;
        vector<long long>coins(n);
        for(int j=0;j<n;j++){
            cin >> coins[j];
        }
        if(n == 0) {
            cout << "Case "<<i+1<<": "<<"0" << endl;
        } else {
            incl = coins[0];
            for(int j=1;j<n;j++){
                excl_max = max(incl, excl);
                incl = excl+coins[j];
                excl = excl_max;
            }
            cout << "Case "<<i+1<<": "<< max(excl,incl)<<endl;
        }

    }

}
