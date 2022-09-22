//#include<iostream>
//#include<climits>
//using namespace std;
//
//int dp[2001][2001];
//
//int convert(string &a, string &b, int i, int j) {
//    if(a[i] == '\0' || b[j] == '\0'){
//        if(a[i] == '\0') {
//            return b.length()-j;
//        } else {
//            return a.length()-i;
//        }
//    } else {
//        if(dp[i][j] == -1){
//            if(a[i] == b[j]){
//                dp[i][j] = convert(a, b, i+1, j+1);
//            } else {
//                if(dp[i+1][j+1] == -1){
//                    dp[i+1][j+1] = convert(a, b, i+1, j+1);
//                }
//                if(dp[i+1][j] == -1){
//                    dp[i+1][j] = convert(a, b, i+1, j);
//                }
//                if(dp[i][j+1] == -1){
//                    dp[i][j+1] = convert(a, b, i, j+1);
//                }
//                dp[i][j] = 1+min(dp[i+1][j+1],min(dp[i+1][j],dp[i][j+1]));
//            }
//        }
//        return dp[i][j];
//    }
//}
//
//int main() {
//    int t;
//    string a,b;
//    cin >> t;
//    while(t--){
//        cin >> a >> b;
//        for(int i=0;i<2001;i++){
//            for(int j=0;j<2001;j++){
//                dp[i][j] = -1;
//            }
//        }
//        cout << convert(a, b, 0, 0)<<"\n";
//    }
//}
