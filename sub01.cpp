#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[20],size,i,min=INT_MAX,max=INT_MIN,start,end,maxRange=INT_MIN;
    
    cin >> size;
    
    for(i=0;i<size;i++)
        cin >> arr[i];
    
    
    int leftSum[size];
    
    for(i=0;i<size;i++){
        if(!arr[i]){
            arr[i] = -1;
        }
    }
    leftSum[0] = arr[0];
    for(i=1;i<size;i++){
        leftSum[i] = leftSum[i-1]+arr[i];
        if(leftSum[i] > max){
            max = leftSum[i];
        }
        if(leftSum[i] < min){
            min = leftSum[i];
        }
    }
    
    int hash[max-min+1];
    
    for(i=0;i<max-min+1;i++){
        hash[i] = -1;
    }
    
    for(i=0;i<size;i++){
        if(leftSum[i] == 0){
            start = 0;
            end = i;
            maxRange = i+1;
        }
        
        if(hash[leftSum[i]-min] == -1){
            hash[leftSum[i] -min] = i;
        } else {
            if(i-hash[leftSum[i] -min] > maxRange){
                maxRange = i-hash[leftSum[i] -min];
                start =hash[leftSum[i] -min]+1;
                end = i;
            }
        }
    }
    cout << start << " " << end;
}
