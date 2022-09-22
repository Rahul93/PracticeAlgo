//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n,c;
//
//bool checkIfValid(long long arr[], long long num) {
//    int cows = 1; long long prev = arr[0];
//    for(int i=1;i < n;i++){
//        if(arr[i]-prev >= num){
//            cows++;
//            prev = arr[i];
//        }
//        
//        if(cows == c){
//            return true;
//        }
//    }
//    return false;
//}
//
//long long bs(long long arr[], long long start, long long end, long long max) {
//    long long mid = start + (end-start)/2;
//    
//    if(start < end){
//        if(checkIfValid(arr, mid)) {
//            max  = bs(arr, mid+1, end, max);
//            if(mid > max)
//                max = mid;
//        } else {
//            max = bs(arr, start, mid, max);
//        }
//    }
//    return max;
//}
//
//int main() {
//    int t;
//    
//    cin >> t;
//    while(t--) {
//        cin >> n >> c;
//        long long *stall = new long long[n];
//        
//        for(int i=0;i<n;i++){
//            cin >> stall[i];
//        }
//        
//        sort(stall, stall+n);
//        
//        cout << bs(stall, 0, stall[n-1], -1);
//    }
//}
