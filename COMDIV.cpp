#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0){
        return a;
    } else {
        return gcd(b, a%b);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b,l;
    cin >> t;
    while(t--) {
        int ans=1;
        cin >> a >> b;
        if(a == b){
            l = a;
        } else {
            if(a > b)
                l = gcd(a,b);
            else
                l = gcd(b,a);
        }
        for(int i=2;i<= sqrt(l);i++){
            if(l%i == 0){
                if(i == l/i)
                    ans +=1;
                else
                    ans +=2;
            }
        }
        cout << ans << "\n";
    }
}
