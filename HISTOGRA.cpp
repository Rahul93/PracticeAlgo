#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    while(n) {
        long long area=INT_MIN,curr_area;
        vector<long long>input(n);
        for(long long i=0;i<n;i++){
            cin >> input[i];
        }
        stack<long long> index;
        for(long long i=0;i<n;i++) {
            while(!index.empty() && input[index.top()] >= input[i]){
                long long top = index.top();
                index.pop();
                if(index.empty()){
                    curr_area = input[top]*i;
                } else {
                    curr_area = input[top]*(i-index.top()-1);
                }
                if(area < curr_area){
                    area = curr_area;
                }
            }
            index.push(i);
        }
        while(!index.empty()){
            long long top = index.top();
            index.pop();
            if(index.empty()){
                curr_area = input[top]*n;
            }else{
                curr_area = input[top]*(n-index.top()-1);
            }
            if(area < curr_area){
                area = curr_area;
            }
        }
        cout << area<<"\n";
        cin >> n;
    }
}
