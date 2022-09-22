#include<bits/stdc++.h>
using namespace std;

int main() {

    int t,ans=1;
    string s;
    vector<int>count(3,0);
    cin >> t;
    while(t--) {
        cin >> s;
        if(s == "1/2") {
            count[1]++;
        } else if(s == "1/4") {
            count[0]++;
        } else {
            count[2]++;
        }
    }
    ans += count[1]/2;
    count[1] = count[1]%2;
    int amt = min(count[0],count[2]);
    ans += amt;
    count[0] -= amt;
    count[2] -= amt;
    if(count[2] > 0) {
        ans += count[2];
    }
    if(count[0] > 0) {
        ans += count[0]/4;
    }
    if(count[1] > 0){
        count[0] -=2;
        ans+=1;
    }
    if(count[0]>0){
        ans += 1;
        count[0] -=4;
    }
    cout << ans;
}
