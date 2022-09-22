#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];

        int count = 1,num=a[0];
        for(int i=1;i<n;i++) {
            if(a[i] == num)
                count++;
            else
                count--;
            if(count == 0){
                num = a[i];
                count = 1;
            }
        }
        count =0;
        for(int i=0;i<n;i++){
            if(a[i] == num)
                count++;
        }
        if(count > n/2){
            cout << "YES "<<num;
        }else {
            cout << "NO"
        }
        cout << "\n";
    }
}
