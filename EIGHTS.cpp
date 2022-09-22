//#include<iostream>
//using namespace std;
//
//long long lastDigits(long long input) {
//    long long ans;
//    switch(input%4){
//        case 0: ans = 192;
//            break;
//        case 1: ans = 442;
//            break;
//        case 2: ans = 692;
//            break;
//        case 3: ans = 942;
//            break;
//    }
//    return ans;
//}
//
//int main() {
//    long long t,input, ans;
//    cin >> t;
//    while(t--) {
//        cin >> input;
//        ans = ((input-1)/4)*1000;
//        ans += lastDigits(input-1);
//        cout << ans << "\n";
//    }
//}
