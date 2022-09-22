#include<iostream>
using namespace std;

int main() {
    int arr[20], size,i,maxIndex,max=-1;
    
    cin >> size;
    
    for(i=0;i<size;i++)
        cin >> arr[i];
    
    int inc[size],dec[size];
    inc[0]=1;
    for(i=1;i<size;i++){
        if(arr[i] >= arr[i-1]){
            inc[i] = inc[i-1]+1;
        }else{
            inc[i]=1;
        }
    }
    dec[size-1] = 1;
    
    for(i= size-2;i>=0;i--){
        if(arr[i] >= arr[i+1]){
            dec[i] = dec[i+1]+1;
        }else{
            dec[i]=1;
        }
    }
    
    for(i=0;i<size;i++){
        if(inc[i]+dec[i] > max){
            max = inc[i]+dec[i];
            maxIndex = i;
        }
    }
    cout << max-1<<endl;
    
    int start = maxIndex - inc[maxIndex]+1;
    int end = maxIndex + dec[maxIndex]-1;
    
    for(i=start;i<=end;i++){
        cout << arr[i]<<" ";
    }
}
