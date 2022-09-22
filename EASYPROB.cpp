#include<bits/stdc++.h>
using namespace std;

string ans(int num) {
    if(num == 2 || num == 0){
        return to_string(num);
    } else {
        int i=0;string level, temp;
        while(num) {
            int rem = num%2;num /= 2;i++;temp += rem+'0';
        }
        while(i--) {
        	if(temp[i] == '1')
            	level += "2("+ans(i)+")+";
        }
        level.erase(level.end()-1);return level;
    }
}
int main() {
    int input[] = {137, 1315, 73, 136, 255, 1384, 16385};
    for(int i=0;i<7;i++){
        cout << input[i]<<"="<<ans(input[i]) << "\n";
    }

}
