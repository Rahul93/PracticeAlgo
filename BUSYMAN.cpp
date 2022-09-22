#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int, int>>time(n);
        for(int i=0;i<n;i++){
            cin >> time[i].first >> time[i].second;
        }
        sort(time.begin(),time.end(), sortbysec);
        int prevlast = 0,count=0;
        for(int i=0;i<n;i++) {
            if(time[i].first >= prevlast){
                count++;
                prevlast = time[i].second;
            }
        }
        cout << count << "\n";
    }

}
