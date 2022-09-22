//#include<iostream>
//using namespace std;
//
//int findPivot(int a[], int start, int end){
//    if(start == end){
//        return start;
//    }
//    if(a[start]<a[end]){
//        return start;
//    }
//    
//    int mid = start + (end-start)/2;
//    
//    if(mid > start && mid < end && a[mid] < a[mid-1] && a[mid] > a[mid+1]){
//        return mid;
//    } else {
//        if(a[start] > a[mid]){
//            return findPivot(a, start, mid);
//        } else {
//            return findPivot(a, mid+1	, end);
//        }
//    }
//}
//int main() {
//    int arr[10],size,n,i,j;
//    bool ans;
//    
//    cin >> size;
//    for(int i=0;i<size;i++){
//        cin >> arr[i];
//    }
//    
//    cin >> n;
//    
//    int pivot = findPivot(arr,0,size-1);
//    
//    if(pivot == 0){
//        i=0;
//        j=size-1;
//    } else {
//        i=pivot;
//        j=pivot-1;
//    }
//    while(arr[i]<arr[j]){
//        if(arr[i]+arr[j] == n){
//            cout << arr[i] <<"," <<arr[j]<<endl;
//            i++;
//            i=i%size;
//            j--;
//            j=j%size;
//        }else {
//            if(arr[i]+arr[j] < n){
//                i++;
//                i = i%size;
//            } else{
//                j--;
//                j = j%size;
//                
//            }
//        }
//    }
//}
