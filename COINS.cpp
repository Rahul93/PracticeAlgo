//#include<unordered_map>
//#include <iostream>
//#include<cmath>
//using namespace std;
//
//long long getMaxAmount(long long s, unordered_map<long long, long long> &m) {
//    if (s == 0){
//        return 0;
//    } else {
//        if(!m.count(s)){
//            if(!m.count(s/2)) {
//                m[s/2] = getMaxAmount(s/2, m);
//            }
//            if(!m.count(s/3)) {
//                m[s/3] = getMaxAmount(s/3, m);
//            }
//            if(!m.count(s/4)) {
//                m[s/4] = getMaxAmount(s/4, m);
//            }
//            m[s] = max(s, (m[s/2]+m[s/3]+m[s/4]));
//        }
//        return m[s];
//    }
//}
//
//int main() {
//    long long s;
//    unordered_map<long long, long long>m;
//    while (cin >> s) {
//        cout << getMaxAmount(s, m) << "\n";
//    }
//}
