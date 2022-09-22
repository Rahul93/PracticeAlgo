#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

vector<vector<long long> > mul(vector<vector<long long> > &a, vector<vector<long long> > &b) {
    long long arowsize = a.size(), acolsize=a[0].size(), bcolsize = b[0].size();
    vector<vector<long long> >c(arowsize, vector<long long>(bcolsize));
    for(long long i=0;i<arowsize;i++) {
        for(long long j=0;j<acolsize;j++){
            for(long long k=0;k<acolsize;k++){
                c[i][j] = (c[i][j]+ (a[i][k]*b[k][j]))%MOD;
            }
        }
    }
    return c;
}

vector<vector<long long> > power(vector<vector<long long> > &a, long long n){

    if(n ==1){
        return a;
    }
    if(n%2) {
    	vector<vector<long long> >ans = power(a, n-1);
    	return mul(a, ans);
    }


    vector<vector<long long> >ans = power(a, n/2);
    return mul(ans, ans);
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        long long n,m, ansn, ansm;
        cin >> n >> m;


        vector<vector<long long> > factor(2, vector<long long>(2));
        factor[0][0]=1,factor[0][1]=1,factor[1][0]=1,factor[1][1]=0;
        if(n < 1){
        	ansn=0;
        } else {
        	ansn = power(factor, n)[0][0]-1;
        }
        if(m<1){
        	ansm=0;
        } else {
        	ansm = power(factor, m+1)[0][0]-1;
        }
        cout << (ansm-ansn+MOD)%MOD << "\n";
    }

}
