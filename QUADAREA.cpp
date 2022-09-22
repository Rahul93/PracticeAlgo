#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    double a,b,c,d,s;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c >>d;
        s = (a+b+c+d)/2;
        cout << setprecision (2) << fixed << sqrt((s-a)*(s-b)*(s-c)*(s-d))<<"\n";
    }
}
