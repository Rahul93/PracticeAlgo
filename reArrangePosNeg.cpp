#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i]<<",";
    }
}
int main() {
    int arr[20],i,j,size;
    
    cin >> size;
    
    for(int i=0;i < size;i++)
        cin >> arr[i];
    
    i=0;j=size-1;
    
    while(arr[i] < 0){
        i++;
    }
    while(arr[j] > 0){
        j--;
    }
    
    while(i<j){
        swap(arr[i],arr[j]);
        i++;j--;
        while(arr[i] < 0){
            i++;
        }
        while(arr[j] > 0){
            j--;
        }
    }
    i=0,j=size-1;
    
    while(arr[j] > 0){
        j--;
    }
    j++;
    while(j < size && arr[i] < 0 && i < j){
        swap(arr[i],arr[j]);
        i +=2;
        j++;
    }
    printArray(arr, size);
}
