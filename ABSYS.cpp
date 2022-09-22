//#include<string>
//#include<iostream>
//using namespace std;
//
//int main() {
//    int t;
//    string s;
//    bool flag = false;
//    cin >> t;
//    cin.ignore();
//    while(t) {
//        getline(cin, s);
//        if(flag){
//            int len = s.size();
//            int macholaIndex = s.find("machula");
//            int equalIndex   = s.find('=');
//            int plusIndex    = s.find('+');
//            if(macholaIndex < equalIndex) {
//                if(macholaIndex < plusIndex){
//                    string second = s.substr(plusIndex+2, (equalIndex-plusIndex-3));
//                    int sec = atoi(second.c_str());
//                    string third  = s.substr(equalIndex+2, (len-equalIndex-2));
//                    int thir = atoi(third.c_str());
//                    int fir = thir - sec;
//                    string first(to_string(fir));
//                    s.replace(0,plusIndex-1, first);
//                } else {
//                    string first = s.substr(0, plusIndex-1);
//                    int fir = atoi(first.c_str());
//                    string third  = s.substr(equalIndex+2, (len-equalIndex-2));
//                    int thir = atoi(third.c_str());
//                    int sec = thir - fir;
//                    string second(to_string(sec));
//                    s.replace(plusIndex+2, (equalIndex-plusIndex-3), second);
//                }
//            } else {
//                string first = s.substr(0, plusIndex-1);
//                int fir = atoi(first.c_str());
//                string second = s.substr(plusIndex+2, (equalIndex-plusIndex-3));
//                int sec = atoi(second.c_str());
//                int thir = fir+sec;
//                string third(to_string(thir));
//                s.replace(equalIndex+2,(len-equalIndex-2),third);
//            }
//            cout << s<<"\n";
//            flag = false;
//            t--;
//        } else{
//            flag = true;
//        }
//    }
//}
