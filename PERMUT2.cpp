//#include<iostream>
//using namespace std;
//int main() {
//    int input;
//    while(true) {
//        cin >> input;
//        if(!input)
//            break;
//        
//        int *arr = new int[input+1],*hash = new int[input+1],i=1;
//        
//        while(i<=input){
//            cin >> arr[i];
//            i++;
//        }
//        
//        for(i=1;i<=input;i++){
//            hash[arr[i]] = i;
//        }
//        
//        for(i=1;i<=input;i++){
//            if(hash[i] != arr[i]){
//                break;
//            }
//        }
//        if(i == (input+1)) {
//            cout << "ambiguous\n";
//        }else {
//            cout << "not ambiguous\n";
//        }
//    }
//}
