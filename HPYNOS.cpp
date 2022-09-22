//#include<iostream>
//using namespace std;
//
//int main() {
//    int n,num,count = 0;
//    
//    cin >> n;
//    num = n;
//    while(true){
//        int temp,ans = 0,a;
//        temp = num;
//        while(temp){
//            a = temp%10;
//            ans += a*a;
//            temp /= 10;
//        }
//        num = ans;
//        count++;
//        if(num/10 == 0)
//            break;
//    }
//    if(num == 1 || num == 7){
//        cout << count;
//    } else {
//        cout << -1;
//    }
//}
