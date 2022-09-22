#include<bits/stdc++.h>
using namespace std;

int main() {

    int t,n,k;
    cin >> t;

    while(t--) {
        cin >> n >> k;
        int temp = n-1;
        long long num=1;
        for(int i=0;i<k-1;i++){
        	num *= temp/(i+1);
        	temp--;
        }
        cout << num <<"\n";
    }
}
