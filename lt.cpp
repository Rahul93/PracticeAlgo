#include<iostream>
#include<bits/stdc++.h>
using namespace std;
map<string, int> d = {{"monday", 1},{"tuesday", 2},{"wednesday",3},{"thursday",4},{"friday",5},{"saturday",6},{"sunday",7}   };

void convert_lower(string &s) {
	int i=0;
	while(s[i]) {
		s[i] = tolower(s[i]);
		i++;
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,s,e;
    string s1, s2;
    cin >> t;
    while(t--) {
        cin >> s1 >> s2;
        cin >> s>>e;
        convert_lower(s1);
        convert_lower(s2);
        if(s > e){
            cout << "impossible"<<endl;
        } else if(s > 13) {
            cout << "many" << endl;
        } else {
            int diff = (d[s2]-d[s1]);
            if(diff < 0){
            	diff +=7;
            }
            diff +=1;
            if(diff < s) {
                cout << "impossible"<<endl;
            } else {
                if(diff+7 >= s && diff+7 <= e){
                    cout << "many" << endl;
                } else{
                    cout << diff << endl;
                }
            }
        }
    }
}
