#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void update(vector<long long> &t, long long qs, long long qe, long long c, long long s, long long e, long long index, vector<long long> &l) {
	if(l[index]) {
		t[index] += (e-s+1)*l[index];
		if(s < e) {
			l[2*index] += l[index];
			l[2*index+1] += l[index];
		}
		l[index] = 0;
	}

    if(qe < s || qs > e) {
        return;
    }
    if(qs <= s && qe >= e) {
        t[index] += (e-s+1)*c;
		if(s < e) {
			l[2*index] += c;
			l[2*index+1] += c;
		}
		return;
    }
	if(s < e) {
		long long mid = s + (e-s)/2;

    	update(t, qs, qe, c, s, mid, 2*index);
    	update(t, qs, qe, c, mid+1, e, 2*index+1);
    	t[index] = t[2*index]+t[2*index+1];
	}

}

long long query(vector<long long> &t, long long qs, long long qe, long long s, long long e, long long index, vector<long long> &l) {
	if(l[index]) {
		t[index] += (e-s+1)*l[index];
		if(s < e) {
			l[2*index] += l[index];
			l[2*index+1] += l[index];
		}
		l[index] = 0;
	}
    if(qe < s || qs > e) {
        return 0;
    }
    if(qs <= s && qe >= e) {
        return t[index];
    } else {
        long long mid = s + (e-s)/2;

        long long s1 = query(t, qs, qe, s, mid, 2*index);
        long long s2 = query(t, qs, qe, mid+1, e, 2*index+1);
        return s1+s2;
    }


}

int main() {
    long long t, n, c, qcount,q,qs,qe,number;

    cin >> t;

    while(t--) {
        cin >> n;
        long long x = (long long)(ceil(log2(n)));
        long long size = 2*pow(2,x);
        vector<long long>arr(size, 0);
        vector<long long>lazy(size, 0);
        cin >> qcount;
        while(qcount--) {
            cin >> q;

            if(q == 0) {
                cin >> qs >> qe >> number;
                update(arr, qs, qe, number, 1, n, 1, lazy);
            } else {
                cin >> qs >> qe;
                cout << query(arr, qs, qe, 1, n, 1, lazy) << endl;
            }
        }

    }

}

