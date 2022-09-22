#include<bits/stdc++.h>
using namespace std;

void sieve(vector<int>&prime) {
    int size = prime.size();
    for(int i=2; i<=sqrt(size);i++) {
        if(prime[i]) {
            int j=2;
            while(i*j < size){
                prime[i*j] = 0;
                j++;
            }
        }

    }
}

int convert(int num, int pos, int digit) {
    int temp= num,ans;
    int ones = temp%10;
    temp /= 10;
    int tens = temp%10;
    temp /= 10;
    int hundreds = temp%10;
    temp /= 10;
    int thousands = temp%10;

    if(pos == 1) {
        ans = (thousands*1000)+(hundreds*100)+(tens*10)+digit;
    } else if(pos == 2) {
        ans = (thousands*1000)+(hundreds*100)+(digit*10)+ones;
    } else if(pos == 3) {
        ans = (thousands*1000)+(digit*100)+(tens*10)+ones;
    } else {
        ans = (digit*1000)+(hundreds*100)+(tens*10)+ones;
    }
    return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    vector<int>prime(10000,1);
    sieve(prime);
    int t;
    cin >> t;
    while(t--) {
        vector<int>visited(10000,0);
        int s,d;
        cin >> s >> d;
        queue<int>q;
        q.push(s);
        visited[s] = 1;
        int level = 0,flag=0,count=q.size();
        while(!q.empty()) {
            int top = q.front();
            if(count ==0){
                level++;
                count = q.size();
            }

            q.pop();
            count--;
            if(top == d) {
                flag = 1;
                break;
            }

            for(int i=0;i<10;i++) {
                int num = convert(top, 1,i);
                if(!visited[num] && prime[num]){
                    q.push(num);
                    visited[num]=1;
                }
            }

            for(int i=0;i<10;i++) {
                int num = convert(top, 2,i);
                if(!visited[num] && prime[num]){
                    q.push(num);
                    visited[num]=1;
                }
            }

            for(int i=0;i<10;i++) {
                int num = convert(top, 3,i);
                if(!visited[num] && prime[num]){
                    q.push(num);
                    visited[num]=1;
                }
            }

            for(int i=1;i<10;i++) {
                int num = convert(top, 4,i);
                if(!visited[num] && prime[num]){
                    q.push(num);
                    visited[num]=1;
                }
            }
        }
        if(flag) {
            cout << level;
        } else {
            cout << "Impossible";
        }
        cout << "\n";
    }


}
