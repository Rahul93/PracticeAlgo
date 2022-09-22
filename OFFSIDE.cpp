//#include<iostream>
//#include<climits>
//using namespace std;
//
//int main() {
//    int a,d,i;
//    cin >> a >> d;
//    while(a && d){
//        int *aa = new int[a];
//        int *da = new int[d];
//        int mina=INT_MAX,mind=INT_MAX,smind=INT_MAX;
//        for(i=0;i<a;i++){
//            cin>> aa[i];
//        }
//        
//        for(i=0;i<d;i++){
//            cin>> da[i];
//        }
//        
//        for(i=0;i<a;i++){
//            if(aa[i] < mina){
//                mina = aa[i];
//            }
//        }
//        
//        for(i=0;i<d;i++){
//            if(da[i] < mind){
//                smind = mind;
//                mind = da[i];
//            } else if(da[i] < smind){
//                smind = da[i];
//            }
//        }
//        if(mina >= smind){
//            cout << "N";
//        } else {
//            cout << "Y";
//        }
//        cout << "\n";
//        cin >> a >> d;
//        delete []aa;
//        delete []da;
//    }
//    
//}
