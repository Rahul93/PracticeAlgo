#include<bits/stdc++.h>

using namespace std;

int main() {

    string input;
    string output;
    while(cin >> input){
        int len = input.size();
        if(isupper(input[0]) || input[len-1] == '_' || (!all_of(input.begin(), input.end(), islower) && input.find('_')) ||
           (!input.find('_') && all_of(input.begin(), input.end(), islower)) || input.find("__")) {
            cout << "Error!" <<"\n";
            continue;
        }
        if(input.find('_')) {
            for(int i=0;i<len;i++) {
                if(input[i] != '_'){
                    output.push_back(input[i]);
                } else {
                    i++;
                    output.push_back(toupper(input[i]));
                }
            }
        } else {
            for(int i=0;i<len;i++) {
                if(isupper(input[i])){
                    output.push_back('_');
                    output.push_back(tolower(input[i]));
                } else {
                    output.push_back(input[i]);
                }
            }
        }
        cout << output << "\n";
    }
}
