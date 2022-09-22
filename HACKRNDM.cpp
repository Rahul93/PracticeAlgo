#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    unordered_map<int,int> occurence;
    int count = 0, temp;
    while(n--) {
        cin >> temp;
        if(!occurence.count(temp)) {
            occurence[temp] = 1;
            if(occurence.count(temp+k)){
                count++;
            }
            if(occurence.count(temp-k)){
                count++;
            }
        }
    }
    cout << count << "\n";
}
