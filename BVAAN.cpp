//#include<iostream>
//#include<algorithm>
//#include<climits>
//using namespace std;
//
//
//int dp[101][101][101];
//string s1,s2;
//
//int maxBlessings(int i, int j, int k){
//    int val;
//    if(k <=0){
//        return 0;
//    }
//    if(i == s1.length() || j == s2.length()){
//        return INT_MIN;
//    }
//    if(dp[i][j][k] == -1){
//        if(s1[i] == s2[j]){
//            val  = (int)s1[i];
//            dp[i][j][k] = max(maxBlessings(i+1, j+1, k), (maxBlessings(i+1, j+1, k-1)+val));
//        } else{
//            dp[i][j][k] = max(maxBlessings(i+1, j, k), maxBlessings(i, j+1, k));
//        }
//    }
//    return dp[i][j][k];
//}
//
//int main() {
//    int t,k;
//    
//    cin >> t;
//    
//    while(t--) {
//        cin >> s1 >> s2 >> k;
//        memset(dp, -1, sizeof(dp[0][0][0])*101*101*101);
//        int ans = maxBlessings(0,0,k);
//        if(ans < 0)
//            ans = 0;
//        cout << ans <<"\n";
//    }
//}
