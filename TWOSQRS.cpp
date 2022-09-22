#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        bool flag = true;
        long long n,ans;
        cin >> n;

        int len = sqrt(n),i,j;

        for(i=0,j=len;i<=j;){
            ans = (pow(i,2)+pow(j,2));
            if(ans == n) {
                cout << "Yes";
                flag = false;
                break;
            } else if(ans < n){
                i++;
            } else {
                j--;
            }
        }
        if(flag)
            cout << "No";
        cout << "\n";

    }
}
