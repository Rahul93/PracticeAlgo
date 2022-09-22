#include<bits/stdc++.h>
#include<iostream>

using namespace std;
pair<int, int> cal(vector<pair<int, int >> &input,int budget,vector<vector<pair<int, int>>> &dp,int index) {
    int size = input.size();
    pair<int, int> ans,incl,excl;
    incl = make_pair(0,-1);
    if(index == size) {
        return make_pair(0,0);
    } else {
    	if(dp[index][budget].first == -1){
    		if(input[index].first <= budget){
	            incl = cal(input, budget-input[index].first, dp, index+1);
	            incl.second += input[index].second;
	            incl.first += input[index].first;
	        }
	        excl = cal(input, budget, dp, index+1);

	        if(incl.second > excl.second) {
	            ans = incl;
	        } else if(incl.second < excl.second){
	            ans = excl;
	        } else {
                if(incl.first > excl.first) {
                    ans = excl;
                } else {
                    ans = incl;
                }
	        }
	        dp[index][budget] = ans;
    	}

    }
    return dp[index][budget];
}

int main() {

    int budget, n,i;

    cin >> budget >> n;
    while(budget && n){
        vector<pair<int, int>> input(n);
        for(int i=0;i<n;i++){
            cin >> input[i].first >> input[i].second;
        }

        vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(501 ,  make_pair(-1,-1)));
        pair<int, int> ans = cal(input, budget, dp, 0);
        cout << ans.first <<" "<< ans.second<<endl;
        cin >> budget >> n;
    }


}
