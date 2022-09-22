//#include<stack>
//#include<iostream>
//using namespace std;
//int main() {
//    int n,max;
//    while(true){
//        cin >> n;
//        if(n == 0){
//            break;
//        }
//        if(n < 3){
//            cout << "yes\n";
//        } else {
//            stack<int> s;
//            max = 0;
//            int *input = new int[n];
//            for(int i=0;i < n;i++){
//                cin >> input[i];
//            }
//            bool flag = false;
//            for(int i=0;i < n-1;i++) {
//                while(!s.empty() && s.top() < input[i]) {
//                    max = s.top();
//                    s.pop();
//                }
//                if(input[i] > input[i+1]) {
//                    s.push(input[i]);
//                } else {
//                    if(input[i] < max){
//                        flag = true;
//                        break;
//                    }
//                    max = input[i];
//                }
//            }
//            
//            if(flag || s.top() < max || input[n-1] < max) {
//                cout << "no\n";
//            } else {
//                cout << "yes\n";
//            }
//        }
//    }
//}
