//#include <iostream>
//using namespace std;
//
//int length(char a[]){
//    int i=0;
//    while(a[i])
//        i++;
//    return i;
//}
//int main() {
//    int num;
//    while(true){
//        cin >> num;
//        if(num == 0)
//            break;
//        char a[201];
//        cin >> a;
//        int len = length(a);
//        for(int i=0; i< num;i++) {
//            int j=i;
//            int left = 2*(num-i) -1;
//            int right = 2*i + 1;
//            while(j < len) {
//                cout << a[j];
//                j += left;
//                if(j < len)
//                    cout << a[j];
//                j += right;
//            }
//        }
//        cout << "\n";
//    }
//    
//    return 0;
//}
