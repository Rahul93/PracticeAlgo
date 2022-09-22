//#include<iostream>
//#include<stack>
//using namespace std;
//
//void factorialZero(long a) {
//    long num  = a/5,ans=0;
//    while(num){
//        ans += num;
//        num = num/5;
//    }
//    cout << ans<<endl;
//}
//
//void factorial(int *a, int num, int size) {
//    while(--num) {
//        int carry = 0,i=0,digit,tempSize=size;
//        while(tempSize--) {
//            digit = num*a[i]+carry;
//            a[i] = digit%10;
//            carry = digit/10;
//            i++;
//        }
//        while(carry != 0){
//            a[i++] = carry%10;
//            carry /= 10;
//            size++;
//        }
//    }
//    for(int i=size-1;i>=0;i--){
//        cout << a[i];
//    }
//    cout << endl;
//}
//
//int main() {
//    int num,a,temp,i;
//    cin >> num;
//    while(num) {
//        cin >> a;
//        temp = a;
//        i=0;
//        int *arr = new int[500];
//        while(temp){
//            arr[i] = temp %10;
//            temp /= 10;
//            i++;
//        }
//        factorial(arr, a, i);
//        num--;
//    }
//}
//
//
