#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--) {
        int price,n,m;
        cin >> price;
        cin >> n >> m;
        vector<vector<int>> edges(n+1, vector<int>(n+1, 0));
        int a,b,val;
        for(int i=0;i<m;i++) {
            cin >>a>>b>>val;
            edges[a][b] = val;
            edges[b][a] = val;
        }
        vector<int> mstSet(n+1, INT_MAX);
        vector<bool>vertex(n+1, false);
        vertex[1] = true;
        mstSet[1] = 0;
        int currMinEdge = 1;
        long long ans=0;
        int count = 1;
        while(count++ < n) {
            int currMin=INT_MAX, currEdge = currMinEdge;
            for(int i=1;i<n+1;i++) {
                if(edges[currEdge][i]){
                    if(!vertex[i]) {
                        mstSet[i] = min(mstSet[i], edges[currEdge][i]);
                    }
                }
            }
            for(int i=1;i<n+1;i++){
            	if(!vertex[i]) {
	            	if(mstSet[i] < currMin){
	                	currMinEdge = i;
	                	currMin = mstSet[i];
	                }
            	}
            }
            ans += mstSet[currMinEdge];
            vertex[currMinEdge] = true;
        }
        cout << ans*price << "\n";
    }
}
