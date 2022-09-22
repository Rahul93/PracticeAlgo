#include<iostream>
using namespace std;

int minimum(int a, int b){
    return ((a < b)? a : b);
}

int maximum(int a, int b){
    return ((a > b)? a : b);
}

int main() {
    
    int arr[20],size,i,max=1,min=1,endMax=0,temp;
    
    cin >> size;
    
    for(i=0;i<size;i++)
        cin >> arr[i];
    
    for(i=0;i<size;i++){
        
        if(arr[i] == 0){
            max = 1;
            min = 1;
        }
        else if(arr[i] > 0){
            max = max*arr[i];
            min = minimum(min*arr[i],1);
        } else {
            temp = min;
            min = max*arr[i];
            max = maximum(temp*arr[i],1);
        }
        
        if(max > endMax)
            endMax = max;
    }
    cout << endMax;
}
