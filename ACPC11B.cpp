#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) {
        int n,m;
        cin >> n;
        vector<int>inputn(n);
        for(int i=0;i<n;i++)
            cin >> inputn[i];
        cin >> m;
        vector<int>inputm(m);
        for(int i=0;i<m;i++)
            cin >> inputm[i];
        sort(inputn.begin(), inputn.end());
        sort(inputm.begin(), inputm.end());
        int i=0,j=0;
        int ans=INT_MAX,curr_ans;
        while(i<n && j < m){
            curr_ans = abs(inputm[j]-inputn[i]);
            if(inputm[j]>inputn[i]){
                i++;
            } else if(inputm[j]<inputn[i]){
                j++;
            } else {
                ans = 0;
                break;
            }
            if(curr_ans < ans)
                ans = curr_ans;
        }
        cout <<ans<< "\n";
    }
}
