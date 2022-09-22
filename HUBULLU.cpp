#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,s;
        cin>>n>>s;
        if(s){
            cout << "Pagfloyd wins.\n";
        } else{
            cout << "Airborne wins.\n";
        }
    }
}
