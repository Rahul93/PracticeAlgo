#include<bits/stdc++.h>

using namespace std;

long long perform(long long op1, long long op2, char opr) {
    long long ans;
    switch(opr){
        case '+': ans = op1+op2;
        break;
        case '*': ans = op1*op2;
        break;
        case '-': ans = op1-op2;
        break;
        case '/': ans = op1/op2;
        break;
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long oprd1, oprd2;
        char opr='\0';

        cin >> oprd1;

        while(true) {
            cin >> opr;
            if(opr == '=')
            break;
            cin >> oprd2;
            oprd1 = perform(oprd1, oprd2, opr);
        }
        cout << oprd1<<endl;
    }
}
