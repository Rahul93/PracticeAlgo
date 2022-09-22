#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m ;
    vector<int> input(n);
    for(int i=0;i<n;i++) {
        cin >> input[i];
    }
    int start = 0,en;
    long long max_sum=-1;
    while(start < n && input[start] > m)
        start++;
    en = start;
    long long sum = input[start];
    while(start<=en && en < n) {
        if(sum < m && en < n-1){
            en +=1;
            sum += input[en];
        } else if(sum > m) {
            sum -= input[start];
            start +=1;
        } else {
            max_sum = sum;
            break;
        }
        if(max_sum < sum && sum < m){
            max_sum = sum;
        }
    }
     cout << max_sum;
}
