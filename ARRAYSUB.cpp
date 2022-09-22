#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,k;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    cin>>k;
    if(k==1){
        for(int i=0;i<n;i++)
            cout << a[i]<<" ";
    } else {
        for(int i=0;i<=n-k;i++){
            int max = INT_MIN;
            for(int j=i;j<i+k;j++) {
                if(max < a[i])
                    max = a[i];
            }
            cout << max << " ";
        }
    }

}
