
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    unordered_set<int>friends(n);
    vector<vector<int> >ff(n);
    int ffn,fr;
    for(int i=0;i<n;i++) {

        cin >> fr;
        friends.insert(fr);
        cin >> ffn;
        ff[i] = vector<int>(ffn);
        for(int j=0;j<ffn;j++){
            cin >> ff[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<ff[i].size();j++){
            if(!friends.count(ff[i][j])){
            	friends.insert(ff[i][j]);
            	sum++;
            }

        }
    }
    cout << sum << "\n";
}
