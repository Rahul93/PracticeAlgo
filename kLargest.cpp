#include<iostream>
#include<queue>
using namespace std;


int* kLargest(int arr[], int size, int k){
    priority_queue<int, vector<int>, greater<int>>pq;
    int i;
    for(i=0;i<k;i++){
        pq.push(arr[i]);
    }
    
    for(i=k;i<size;i++){
        if(pq.top() < arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int *output = new int[k];
    i=0;
    while(!pq.empty()){
        output[i++] = pq.top();
        pq.pop();
    }
    return output;
}

int main(){
    
    int arr[20],size,i,k;
    cin >> size;
    
    for(i=0;i<size;i++)
        cin >> arr[i];
    
    cin >> k;
    
    int *output = kLargest(arr, size, k);
    
    for(i=0;i<k;i++)
        cout << output[i]<<" ";
}
