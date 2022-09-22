#include<bits/stdc++.h>
using namespace std;

int main() {
    int m=-1,n;
    while(true){
        cin >> m;
        if(m == 0)
            break;
        vector<int>a1(m);
        vector<int>same(20003,0);
        for(int i=0;i<m;i++)
            cin >> a1[i];
        cin >> n;
        vector<int>a2(n);
        for(int i=0;i<n;i++)
            cin >> a2[i];
        int i=0,j=0;
        while(i<m && j<n) {
            if(a1[i] == a2[j]){
                same[a1[i]+10000] = 1;
                i++,j++;
            } else if(a1[i] < a2[j]){
                i++;
            } else if(a1[i] > a2[j]){
                j++;
            }
        }

        long long ans=0;
        i=0,j=0;
        while(i<m && j<n) {
            long long count1=0,count2=0;
            while(i < m && !same[a1[i]+10000]){
                count1 += a1[i];
                i++;
            }
            while(j < n && !same[a2[j]+10000]){
                count2 += a2[j];
                j++;
            }
            ans += max(count1, count2);
            if( i < m && j < n){
                ans += a1[i];
                i++;j++;
            }
            count1 =0,count2=0;
            if(i == m) {
                while(j < n){
                    count2 += a2[j];
                    j++;
                }
            }
            if(count2 > 0)
                ans += count2;
            if(j == n) {
                while(i < m){
                    count1 += a1[i];
                    i++;
                }
            }
            if(count1 > 0)
                ans += count1;
        }
        cout << ans << "\n";
    }

}
