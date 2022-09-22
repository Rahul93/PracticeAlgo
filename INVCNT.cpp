//#include<iostream>
//using namespace std;
//
//long long mergeCount(int *input, int *temp, int start, int mid, int end) {
//
//    long long count = 0;
//    int i=start,j=mid,k=start;
//    
//    while(i<mid && j<end) {
//        if(temp[i] <= temp[j]){
//            input[k++] = temp[i++];
//        } else {
//            count += mid-i;
//            input[k++] = temp[j++];
//        }
//    }
//    
//    while(i<mid){
//        input[k++] = temp[i++];
//    }
//    while(j<end){
//        input[k++] = temp[j++];
//    }
//    for(i=start;i<end;i++)
//        temp[i]=input[i];
//    return count;
//}
//
//long long countInversions(int *input, int *temp, int start, int end) {
//    if(start < end && start != end-1){
//        int mid = start+(end-start)/2;
//        return countInversions(input, temp, start, mid)+countInversions(input, temp, mid, end)+mergeCount(input, temp, start, mid, end);
//    } else{
//        return 0;
//    }
//}
//
//int main() {
//    int t;
//    cin >> t;
//    while(t--) {
//        int n;
//        cin >> n;
//        int *input = new int[n];
//        int *temp = new int[n];
//        int i=0;
//        while(n--) {
//            cin >> input[i];
//            i++;
//        }
//        n=i;
//        for(i=0;i<n;i++){
//            temp[i] = input[i];
//        }
//        cout << countInversions(input, temp, 0, i) <<"\n";
//        delete []input;
//        delete []temp;
//    }
//}
