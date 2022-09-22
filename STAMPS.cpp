//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//int main() {
//    int t,j=1;
//    cin >> t;
//    while(t--) {
//        int stamps, num,i=0;
//        cin >> stamps;
//        cin >> num;
//        int *arr = new int[num];
//        while(i < num){
//            cin >> arr[i];
//            i++;
//        }
//        sort(arr,arr+num,greater<int>());
//        for(i=0;i<num;){
//            stamps -= arr[i];
//            i++;
//            if(stamps <=0)
//                break;
//        }
//        cout << "Scenario #"<<j<<":\n";
//        if(stamps <= 0){
//            cout << i<<"\n";
//        } else {
//            cout << "impossible\n";
//        }
//        j++;
//    }
//}
