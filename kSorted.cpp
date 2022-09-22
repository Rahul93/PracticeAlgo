#include<iostream>
#include<queue>
using namespace std;

void kSort(int arr[], int size,int k){
    priority_queue<int, vector<int>, greater<int>>pq;
    int i;
    for(i=0;i<=k;i++)
        pq.push(arr[i]);
    
    for(i=0;i<size;i++){
        arr[i] = pq.top();
        pq.pop();
        if((k+1+i) < size)
            pq.push(arr[k+1+i]);
    }
}

int main() {
    
    int arr[20],size,i,k;
    
    cin >> size;
    
    for(i=0;i<size;i++)
        cin >> arr[i];
    
    cin >> k;
    
    kSort(arr,size,k);
    
    for(i=0;i<size;i++)
        cout << arr[i]<<" ";
}
