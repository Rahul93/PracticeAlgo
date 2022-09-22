#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n,k;
    cin >>t;
    while(t--) {
        cin >> n>> k;
        vector<int> input(n);
        for(int i=0;i<n;i++) {
            cin >> input[i];
        }
        sort(input);
        int min_diff = INT_MAX;
        for(int start=0;start < n-k+1;start++) {
            int end = start+k-1;
            int curr_diff = input[end] - input[start];
            if(min_diff > curr_diff) {
                min_diff = curr_diff;
            }
        }
        cout << min_diff << "\n";
    }
}
