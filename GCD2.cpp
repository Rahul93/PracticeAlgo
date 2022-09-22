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
    int t,a;
    string b;
    cin >> t;
    while(t--) {

        cin >> a >> b;
        if(a == 0) {
            cout << b;
        }else if(b.size() == 1 && b[0] == '0'){
            cout << a;
        } else {
            int mod=0;
            for(int i=b.size()-1;i>=0;i--){
                int digit = b[i]-'0';
                mod = mod*10+digit;
                mod = mod%a;
            }
            cout << gcd(a,mod);
        }
        cout << "\n";
    }

}
98
4
