///* C++ implementation to convert infix expression to postfix*/
//// Note that here we use std::stack  for Stack operations
//#include<iostream>
//#include<climits>
//using namespace std;
//
//class CustomPair{
//public:
//    int max;
//    int min;
//    
//    CustomPair() {
//        this->min = 0;
//        this->max = 0;
//    }
//};
//
//int length(char input[]){
//    int i=0;
//    while(input[i]){
//        i++;
//    }
//    return i;
//}
//
//CustomPair calculate(char exp[], int start, int end, CustomPair **dp) {
//    CustomPair p;
//    CustomPair minMax;
//    minMax.min = INT_MAX;
//    minMax.max = INT_MIN;
//    if(start == end){
//        dp[start][end].min = exp[start]-'0';
//        dp[start][end].max = exp[start]-'0';
//        
//    } else {
//        int k;
//        if(dp[start][end].min == -1 && dp[start][end].max == -1 ){
//            for(k=start;k<end-1;k+=2){
//                if(dp[start][k].min == -1 && dp[start][k].max == -1){
//                    dp[start][k] = calculate(exp, start, k, dp);
//                }
//                
//                if(dp[k+2][end].min == -1 && dp[k+2][end].max == -1){
//                    dp[k+2][end] = calculate(exp, k+2, end, dp);
//                }
//                if(exp[k+1] == '*'){
//                    p.min = dp[start][k].min*dp[k+2][end].min;
//                    p.max = dp[start][k].max*dp[k+2][end].max;
//                } else {
//                    p.min = dp[start][k].min+dp[k+2][end].min;
//                    p.max = dp[start][k].max+dp[k+2][end].max;
//                }
//                if(minMax.min > p.min){
//                    minMax.min= p.min;
//                }
//                if(minMax.max < p.max){
//                    minMax.max = p.max;
//                }
//                dp[start][end] = minMax;
//            }
//        }
//    }
//    return dp[start][end];
//}
//
//void findLimits(char exp[]){
//    int len=length(exp);
//    CustomPair **dp = new CustomPair*[len];
//    
//    for(int i=0;i<len;i++)
//        dp[i] = new CustomPair[len];
//    
//    for(int i=0;i<len;i++){
//        for(int j=0;j<len;j++){
//            dp[i][j].min = -1;
//            dp[i][j].max = -1;
//        }
//    }
//    
//    CustomPair c = calculate(exp, 0,len-1, dp);
//    cout << c.max << " " << c.min<<"\n";
//    for(int i=0;i<len;i++)
//        delete []dp[i];
//}
//
////Driver program to test above functions
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--) {
//        char exp[1000];
//        cin >> exp;
//        findLimits(exp);
//    }
//    return 0;
//}
