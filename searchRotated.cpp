#include<iostream>
using namespace std;

int bSearch(int arr[], int start,int end,int n){
    if(start<=end){
        int mid = start + (end-start)/2;
        
        if(arr[mid] == n){
            return mid;
        }else {
            if(arr[mid] > n){
                return bSearch(arr, start, mid-1, n);
            } else {
                return bSearch(arr, mid+1, end, n);
            }
        }
    } else {
        return -1;
    }
}

int pivotSearch(int a[], int start, int end){
    
    if(a[start] < a[end]){
        return start;
    }
    if(start == end){
        return start;
    }
    int mid = start + (end-start)/2;
    if(mid > start && mid < end && a[mid] < a[mid-1] && a[mid] < a[mid+1]){
        return mid;
    } else {
        if(a[start] > a[mid]){
            return pivotSearch(a, start, mid-1);
        } else {
            return pivotSearch(a, mid+1, end);
        }
    }
   
}

int searchRotated(int arr[],int size,int n){
    int pivot = pivotSearch(arr,0,size-1);
    if(pivot == 0){
        return bSearch(arr,0,size,n);
    }else {
        int val = bSearch(arr,0,pivot-1,n);
        if(val == -1){
            val = bSearch(arr,pivot,size-1,n);
        }
        return val;
    }
}

int main(){
    int arr[10],size,n;
    
    cin >> size;
    
    for(int i=0;i<size;i++)
        cin >> arr[i];
    cin >> n;
    
    cout << searchRotated(arr,size, n);
}
