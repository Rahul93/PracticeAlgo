#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int>a(t);
    vector<int>b(t);
    vector<int>c(t);
    vector<int>d(t);
    vector<int>sum1(t*t);
    vector<int>sum2(t*t);
    for(int i=0;i<t;i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    int k=0;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            sum1[k++] = a[i]+b[i];
        }
    }
    k=0;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            sum2[k++] = c[i]+d[i];
        }
    }
    sort(sum1.begin(), sum1.end());
    sort(sum2.begin(), sum2.end());
    int len = sum1.size();
    int i=0,j = len-1;
    int count = 0;
    while(i<len && j>=0){
        if(sum1[i]+sum2[j] == 0) {
            int count1 = 1,count2=1;
            int l = sum1[i],r = sum2[j];
            while(l == sum1[i]){
                count1++;
                i++;
            }
            while(r == sum2[j]){
                count1++;
                j--;
            }
            count+=count1*count2;
        } else if(sum1[i]+sum2[j] > 0) {
            j--;
        } else {
            i++;
        }
    }
    cout << count << "\n";
}
