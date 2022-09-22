//#include<iostream>
//#include<cstring>
//#include<climits>
//using namespace  std;
//int dp[101][101]={};
//int maxStones(int **input, int n, int m, int i, int j){
//    int sum1 = INT_MIN,sum2 = INT_MIN, sum3 = INT_MIN;
//    if(i == n){
//        return 0;
//    }
//    
//    if(!dp[i][j]){
//        if(j > 0){
//            sum1 = maxStones(input, n, m, i+1, j-1);
//        }
//        if(j < m-1){
//            sum2 = maxStones(input, n, m, i+1, j+1);
//        }
//        sum3 = maxStones(input, n, m, i+1, j);
//        
//        dp[i][j] = input[i][j]+ max(sum1, max(sum2, sum3));
//    }
//    return dp[i][j];
//}
//
//int main() {
//    int t,n,m;
//    cin >> t;
//    
//    while(t--){
//        cin >> n >> m;
//        memset(dp, 0, sizeof(dp[0][0]) * 101 * 101);
//        int **input = new int*[n];
//        
//        for(int i=0;i<n;i++){
//            input[i] = new int[m];
//        }
//        
//        for(int i=0;i<n;i++){
//            for(int j=0;j<m;j++){
//                cin >> input[i][j];
//            }
//        }
//        int max=0,ans;
//        for(int j=0;j < m; j++){
//            ans = maxStones(input, n, m, 0, j);
//            if(ans > max)
//                max = ans;
//        }
//        cout << max<<"\n";
//    }
//    
//}
