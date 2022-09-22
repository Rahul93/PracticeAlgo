#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b =temp;
}

void printArray(int arr[], int size){
    for(int i=0;i < size;i++)
        cout << arr[i]<<" ";
}
int main() {
    
    int arr[10],size;
    
    cin >> size;
    
    for(int i=0;i<size;i++)
        cin >> arr[i];
    
    for(int i=0;i<size-1;i++){
        if(i%2 == 0){
            if(arr[i] < arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }else {
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    printArray(arr, size);
}
