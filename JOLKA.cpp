//#include <iostream>
//using namespace std;
//
//bool allDot(char **arr,int n) {
//    for(int i=0;i<2;i++) {
//        for(int j=0;j<n;j++) {
//            if(arr[i][j]=='#') return false;
//        }
//    }
//    return true;
//}
//
//int around(char **arr,int n,int i,int j) {
//    
//    int count=0;
//    if(i-1 == 0 && arr[i-1][j]=='#') count++;
//    if(i+1 == 1 && arr[i+1][j]=='#') count++;
//    if(j-1 != -1 && arr[i][j-1]=='#') count++;
//    if(j+1 != n && arr[i][j+1]=='#') count++;
//    
//    return count;
//}
//
//bool fun(char **arr,int n,int i,int j) {
//    
//    int a=i,b=j;
//    while(true) {
//        
//        //up
//        if(a-1==0 && arr[a-1][b]=='#') { //cout << "up\n";
//            arr[a][b]='.';
//            a=0;
//        }
//        //down
//        else if(a+1==1 && arr[a+1][b]=='#'){ //cout << "down\n";
//            arr[a][b]='.';
//            a=1;
//        }
//        //right
//        else if(b+1 != n && arr[a][b+1]=='#') { //cout << "right\n";
//            arr[a][b]='.';
//            b++;
//        }
//        //nothing
//        else { //cout << "else\n";
//            arr[a][b]='.';
//            if(allDot(arr,n)) return true;
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    
//    int t; cin >> t;
//    while(t--) {
//        
//        int n; cin >> n;
//        char **arr = new char* [2];
//        char **arr2 = new char* [2];
//        for(int i=0;i<2;i++) {
//            arr[i] = new char[n];
//            arr2[i] = new char[n];
//        }
//        for(int i=0;i<2;i++) {
//            for(int j=0;j<n;j++) {
//                cin >> arr[i][j];
//                arr2[i][j] = arr[i][j];
//            }
//        }
//        
//        if(allDot(arr,n)) {
//            cout << "yes\n";
//            continue;
//        }
//        
//        for(int col=0;col<n;col++) {
//            
//            if(arr[0][col]=='.' && arr[1][col]=='.') continue;
//            if(arr[0][col]=='#' || arr[1][col]=='#') {
//                
//                if(arr[0][col]=='#' && arr[1][col]=='#') { //cout << "&" << col;
//                    //both #
//                    if(fun(arr,n,0,col) || fun(arr2,n,1,col))
//                        cout << "yes\n";
//                    else
//                        cout << "no\n";
//                    break;
//                }
//                else {
//                    //only 1 #
//                    if(arr[0][col]=='#') { //cout << 1 << col;
//                        if(fun(arr,n,0,col))
//                            cout << "yes\n";
//                        else
//                            cout << "no\n";
//                        break;
//                    }
//                    if(arr[1][col]=='#') { //cout << 2;
//                        if(fun(arr,n,1,col))
//                            cout << "yes\n";
//                        else
//                            cout << "no\n";
//                        break;
//                    }
//                }
//            }
//            
//        }
//        
//    }
//    
//    return 0;
//}
