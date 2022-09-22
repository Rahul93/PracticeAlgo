//#include<iostream>
//using namespace std;
//
//int main() {
//    int num,ans,a;
//    while(true) {
//        cin >> num;
//        if(num == -1)
//            break;
//        ans = 0;
//        int *arr = new int[num];
//        int temp = num;
//        while(temp--){
//            cin >> a;
//            arr[num-temp-1] = a;
//            ans += a;
//        }
//        temp = num;
//        if(ans%num == 0) {
//            int dis = ans/num;
//            ans = 0;
//            while(temp--){
//                if(arr[num-temp-1] > dis) {
//                    ans += (arr[num-temp-1] - dis);
//                }
//            }
//            cout << ans;
//        } else {
//            cout << -1;
//        }
//        cout << "\n";
//    }
//}
