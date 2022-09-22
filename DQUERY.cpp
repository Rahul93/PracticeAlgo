#include<bits/stdc++.h>
using namespace std;

int block;
class range{
    public:
    int L;
    int R;
    int index;
};

bool compare(range &r1, range &r2){
    int r1Block = r1.L/block;
    int r2Block = r2.L/block;
    if(r1block != r2block)
        return (r1Block < r2block);
    else
        return (r1.R < r2.R);
}

int main() {
    int n,i=0;

    scanf("%d", &n);
    block = (int)sqrt(n);
    vector<int>input(n);
    while(i<n){
        scanf("%d", &input[i]);
        i++;
    }

    int q;
    scanf("%d", &q);
    vector<range>queries(q);
    vector<int>output(q);
    for(int i=0;i<q;i++) {
        scanf("%d%d", &queries[i].L, &queries[i].R);
        queries[i].index = i;
    }

    sort(queries.begin(), queries.end(), compare);
    unordered_map<int,int>num;
    int currL=0,currR=0;
    for(int i=0;i<q;i++) {
    	int L = queries[i].L-1,R=queries[i].R-1;
        while(currL<L){
            if(num.count(input[currL]) == 1){
                 if(num[input[currL]] == 1) {
                    num.erase(input[currL]);
                 } else {
                    num[input[currL]]--;
                 }
            }
            currL++;
        }
        while(currL >L) {
            if(num.count(input[currL-1]) == 1) {
                num[input[currL-1]]++;
            } else {
                num[input[currL-1]] = 1;
            }
            currL--;
        }
        while(currR<=R){
            if(currR >= L){
                if(num.count(input[currR]) == 1) {
                    num[input[currR]]++;
                } else {
                    num[input[currR]] = 1;
                }
            }

            currR++;
        }
        while(currR>R+1){
           if(num.count(input[currR-1]) == 1){
                 if(num[input[currR-1]] == 1) {
                    num.erase(input[currR-1]);
                 } else {
                    num[input[currR-1]]--;
                 }
            }
            currR--;
        }
        output[queries[i].index] = num.size();
    }

    for(i=0;i<q;i++) {
        printf("%d\n",output[i]);
    }
}
