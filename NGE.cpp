#include<iostream>
#include<stack>
using namespace std;

void nextGreaterElement(int arr[], int size, int output[]){
    int i;
    stack<int> s;
    
    for(i=0;i<size;i++) {
        
        if(s.empty()){
            s.push(i);
        } else {
            if(arr[i] <= arr[s.top()]){
                s.push(i);
            } else {
                while(!s.empty() && arr[i] > arr[s.top()]){
                    output[s.top()] = arr[i];
                    s.pop();
                }
                
                    s.push(i);
                
            }
        }
        for(int j=0;j<size;j++)
            cout << output[j]<<" ";
        cout<< "\n";
    }
    
    while(!s.empty()){
        output[s.top()] = -1;
        s.pop();
    }
}

int main() {
    
    int arr[20],size,i=0;
    cin >> size;
    while(i<size){
        cin >> arr[i];
        i++;
    }
    int output[size];
    for(i=0;i<size;i++)
        output[i] = -1;
    nextGreaterElement(arr,size,output);
    i=0;
    while(i<size){
        cout << output[i]<<" ";
        i++;
    }
    
}
