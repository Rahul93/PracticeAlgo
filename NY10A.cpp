#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,count;
    string input;
    vector<string> order{"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH" };
    cin >> t;
    while(t--) {
        unordered_map<string, int> ht({
												  { "TTT", 0 },
												  { "TTH", 0 },
												  { "THT", 0 },
												  { "THH", 0 },
												  { "HTT", 0 },
												  { "HTH", 0 },
												  { "HHT", 0 },
												  { "HHH", 0 }
  	  	  	  	  	  	  	  	  	  	  	  	});
        cin >> count;
        cout << count;
        cin >> input;
        for(int i=0;i<input.length()-2;i++) {
            ht[input.substr(i,3)]++;
        }
        for (int i=0;i<order.size();i++) {
            cout << " "<< ht[order[i]];
        }
        cout << endl;
    }
}
