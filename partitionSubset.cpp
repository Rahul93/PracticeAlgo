#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> subset;

void print2D(vector<vector<int>>subset, int size){
    for(int i=0;i<size;i++){
        for(int j=0;j< subset[i].size();j++){
            cout << subset[i][j]<<" ";
        }
        cout << "\n";
    }
}

int sumSubset(int arr[], int currIndex, int size, int sum, vector<int> temp){

    if(currIndex == size){
        if(sum == 0){
            subset.push_back(temp);
            return 1;
        } else{
            return 0;
        }
    }
    
    int count1 = sumSubset(arr,currIndex+1, size, sum, temp);
    temp.push_back(arr[currIndex]);
    int count2 = sumSubset(arr, currIndex+1, size, sum-arr[currIndex], temp);
    return count1+count2;
}

int main() {
    int arr[20],size,i,sum=0,count=0;
    
    cin >> size;
    
    for(i=0;i<size;i++)
        cin >> arr[i];
    
    for(i=0;i<size;i++){
        sum += arr[i];
    }
    
    vector<int> temp;
    
    if(sum%2 == 0){
        count = sumSubset(arr, 0, size, sum/2,temp);
    }
    print2D(subset,count);
}
