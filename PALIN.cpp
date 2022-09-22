//#include<iostream>
//using namespace std;
//
//long long length(char a[]){
//    long long i=0;
//    while(a[i]){
//        i++;
//    }
//    return i;
//}
//
//int main() {
//    int t;
//    char a[1000002];
//    cin >>t;
//    while(t--) {
//        cin >> a;
//        long long len = length(a);
//        
//        long long i=0, j = len-1;
//        bool flag = false;
//        while(i<j){
//            
//            if(a[i] > a[j]){
//                flag = true;
//            } else if(a[i] < a[j]){
//                flag = false;
//            }
//            a[j] = a[i];
//            j--;i++;
//        }
//        if(!flag) {
//            if(i == j) {
//                if(a[i] != '9'){
//                    a[i]++;
//                } else {
//                    while(a[i] == '9'){
//                        a[i] = '0';
//                        a[j] = a[i];
//                        i--;j++;
//                    }
//                    if(i != -1){
//                        a[i]++;
//                        a[j] = a[i];
//                    } else{
//                        a[j-1]='1';
//                        cout << "1";
//                    }
//                }
//            } else {
//                i--;
//                j++;
//                if(a[i] != '9'){
//                    a[i]++;
//                    a[j] = a[i];
//                } else {
//                    while(a[i] == '9'){
//                        a[i]='0';
//                        a[j]= a[i];
//                        i--;j++;
//                    }
//                    if(i != -1){
//                        a[i]++;
//                        a[j] = a[i];
//                    }else {
//                        a[j-1]='1';
//                        cout <<"1";
//                    }
//                }
//            }
//            
//        }
//        cout << a<<"\n";
//    }
//}
