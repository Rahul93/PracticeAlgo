//#include<iostream>
//using namespace std;
//
//int length(string a) {
//    int i=0;
//    while(a[i])
//        i++;
//    return i;
//}
//
//unsigned long long numberPossibilites(string input, unsigned long long dp[],int index){
//    long long ans = 0, ansNext=0;
//    
//    if(input[index] == '\0') {
//        dp[index]=1;
//        return 1;
//    } else {
//        if(!dp[index]){
//            if(input[index+1] != '\0'){
//                if((input[index] == '1') || (input[index] == '2' && input[index+1] < '7')){
//                    if(!dp[index+2]){
//                        ans = numberPossibilites(input, dp, index+2);
//                    } else {
//                        ans = dp[index+2];
//                    }
//                    
//                }
//            }
//            if(input[index] != '0'){
//                if(!dp[index+1]){
//                    ansNext = numberPossibilites(input, dp, index+1);
//                    ans += ansNext;
//                } else {
//                    ans += dp[index+1];
//                }
//            }
//            dp[index] = ans;
//        }
//       
//    }
//    return dp[index];
//}
//
//int main() {
//    string input;
//    while(true){
//        cin >> input;
//        if(input[0] == '0' && input[1] == '\0')
//            break;
//        int len = length(input);
//        
//        unsigned long long *dp = new unsigned long long[len+1]();
//        
//        cout << numberPossibilites(input, dp, 0) << "\n";
//    }
//}
