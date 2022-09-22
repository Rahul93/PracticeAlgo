#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>input(n);
    unordered_map<int, int>m2;
    for(int i=0;i<n;i++) {
        cin >> input[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            for(int k=0;k<n;k++) {
                if(input[k]) {
                	int v2 = (input[i]+input[j])*input[k];
                    if(m2.count(v2)) {
                        m2[v2]++;
                    } else {
                        m2[v2] = 1;
                    }
                }
            }
        }
    }
    unsigned long long int sum = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            for(int k=0;k<n;k++) {
                int v1 = (input[i]*input[j])+input[k];
                if(m2.count(v1))
                    sum += m2[v1];
            }
        }
    }

    cout << sum << "\n";
}

