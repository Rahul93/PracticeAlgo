
#include<bits/stdc++.h>
using namespace std;

class mycomparator{
    public:
       bool operator() (pair<int,int> &p1, pair<int, int> &p2) {
        return p1.second > p2.second;
       }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,num,n,sec,a,b,val,routes;
    string city;
    cin >> t;
    while(t--) {
        cin >> num;
        vector<vector<pair<int, int>>>edges(num+1);
        unordered_map<string, int>city_index;
        for(int i=1;i<num+1;i++) {
            cin >> city;
            city_index[city] = i;
            cin >> n;
            while(n--) {
                cin >> sec >> val;
                edges[i].push_back(make_pair(sec, val));
            }
        }
        cin >> routes;
        while(routes--) {
            string s1, s2;
            vector<int>vertex(num+1, INT_MAX);
            priority_queue<pair<int, int>, vector<pair<int, int>>, mycomparator> pq;
            vector<bool>msSet(num+1, false);
            cin >> s1 >> s2;
            int a = city_index[s1],b=city_index[s2];

            vertex[a] = 0;
            pq.push(make_pair(a, 0));
            msSet[a] = true;
            int currVertex = a;
            while(currVertex != b) {
                for(int i=0;i<edges[currVertex].size();i++) {
                    int cost = edges[currVertex][i].second,j=edges[currVertex][i].first;
                    if((cost+vertex[currVertex]) < vertex[j]){
                        vertex[j] = cost + vertex[currVertex];
                        pq.push(make_pair(j,vertex[j]));
                    }

                }
                pair<int, int>currMinVertex = pq.top();
                pq.pop();
                msSet[currMinVertex.first] = true;
                currVertex = currMinVertex.first;

            }
            cout << vertex[currVertex]<<"\n";
        }

    }
}
