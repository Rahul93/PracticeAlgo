#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cpp_int a,b;
    int n;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        cout << (a*b) << "\n";
    }
}
