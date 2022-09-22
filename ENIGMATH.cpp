#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t,a,b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        int cal
        if(a>b)
            cal = gcd(a,b);
        else
            cal = gcd(b,a);
        cout << b/cal << a/cal<<"\n";
    }
}
