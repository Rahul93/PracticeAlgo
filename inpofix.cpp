//#include<stack>
//#include<iostream>
//using namespace std;
//
//int pre(char op) {
//    int response = -1;
//    switch(op) {
//        case '+':
//        case '-': response = 1;
//            break;
//        case '/':
//        case '*': response = 2;
//            break;
//        case '^': response = 3;
//            break;
//    }
//    return response;
//}
//int main() {
//    int num;
//    cin>> num;
//    while(num--) {
//        stack<char>S;
//        char a[10000];
//        cin >> a;
//        for(int i =0;a[i];i++){
//            if(a[i] == '(') {
//                S.push(a[i]);
//            } else if( a[i] >= 'a' && a[i] <= 'z') {
//                cout << a[i];
//            } else if(a[i] == ')') {
//                while(S.top() != '('){
//                    cout << S.top();
//                    S.pop();
//                }
//                S.pop();
//            } else {
//                if(pre(a[i]) <= pre(S.top())) {
//                    S.push(a[i]);
//                } else {
//                    while(!S.empty() && pre(S.top()) > pre(a[i])){
//                        cout << S.top();
//                        S.pop();
//                    }
//                    S.push(a[i]);
//                }
//            }
//        }
//        while(!S.empty()) {
//            cout << S.top();
//            S.pop();
//        }
//        cout << endl;
//    }
//}
