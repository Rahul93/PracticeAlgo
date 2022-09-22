//#include<iostream>
//#include<cstring>
//using namespace std;
//int dp[10000][101];
//int n,m;
//bool gameOfDigits(int num, int i){
//    if(i == 0){
//        if(num > n)
//            return true;
//        else
//            return false;
//    }
//    if(dp[num][i] != -1){
//        return dp[num][i];
//    }
//    int c=1,t=num,temp=num;
//    bool ans=false;
//    if((i%2 == 0 && m%2 == 0) || (i%2 == 1 && m%2 == 1)) {
//        while(c < 10000){
//            int a = t%10;
//            if(a == 9){
//                temp = (num-9*c);
//            } else {
//                temp = num+c;
//            }
//            ans = ans || gameOfDigits(temp, i-1);
//            t = t/10;
//            c = c*10;
//        }
//    } else {
//        ans = true;
//        while(c < 10000){
//            int a = t%10;
//            if(a == 9){
//                temp = (num-9*c);
//            } else {
//                temp = num+c;
//            }
//            ans = ans && gameOfDigits(temp, i-1);
//            t = t/10;
//            c = c*10;
//        }
//    }
//    dp[num][i] = ans;
//    return dp[num][i];
//}
//
//int main() {
//    int t;
//    cin >> t;
//    while(t--) {
//        cin >> n >> m;
//        memset(dp, -1, sizeof(dp));
//        if(gameOfDigits(n,m)){
//            cout << "Ada";
//        } else{
//            cout << "Vinit";
//        }
//        cout << "\n";
//    }
//}
