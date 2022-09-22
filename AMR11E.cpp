#include<bits/stdc++.h>

using namespace std;

void sieve(vector<bool> &prime) {

    for(int i=2;i<=sqrt(3000);i++){
        for(int j=2;j*i<3001;j++){
            prime[i*j] = false;
        }
    }
}

void modifiedSieve(vector<int> &sieve, vector<int> &hash, vector<bool> &prime) {
    for(int i=2;i<=500;i++){
        if(prime[i]){
            for(int j=1;i*j<3001;j++){
                sieve[i*j]++;
            }
        }
    }
    int j = 0;
    for(int i=2;i<3001;i++){
        if(sieve[i] >= 3){
            hash[j++] = i;
        }
        if(j == 1000)
        	break;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,k;
    cin >> t;
    vector<bool>prime(3001, true);
    sieve(prime);
    vector<int>sieve(3001,0);
    vector<int>hash(1000);
    modifiedSieve(sieve, hash, prime);
    while(t--) {
        cin >> k;
        cout << hash[k-1]<<"\n";
    }
}
