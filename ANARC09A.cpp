#include<iostream>
using namespace std;

int main() {

string s;
int t=1;

cin >> s;

while(s[0] != '-') {

    int count = 0;
    int curr=0;

    for(int i=0;i<s.length(); i++) {

        if(s[i] == '{') {
            curr++;
        } else {
            curr --;
        }
        if(curr < 0){
            curr = 1;
            count++;
        }
    }
    count += curr/2;
    cout << t<<". "<<count<<endl;
    t++;
    cin >> s;
}
}
