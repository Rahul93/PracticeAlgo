//#include<iostream>
//using namespace std;
//
//
//int diameter[10002];
//int seen[10002]={};
//
//int getDiameter(int **edges, int e, int root) {
//    int maximum=0;
//    int secMax = 0;
//    int node = root,i,ans=0;
//    seen[node] = 1;
//    for(i=0;i<e;i++){
//        ans =0;
//        if(edges[i][0] == node && !seen[edges[i][1]]){
//            ans =  1+getDiameter(edges, e, edges[i][1]);
//        } else if(edges[i][1] == node && !seen[edges[i][0]]) {
//            ans =  1+getDiameter(edges, e, edges[i][0]);
//        }
//        
//        if(ans > maximum){
//            secMax = maximum;
//            maximum = ans;
//        } else if(ans > secMax) {
//            secMax = ans;
//        }
//    }
//    diameter[node]= maximum+secMax;
//    return maximum;
//}
//
//int main() {
//    
//    int n,i,max=0;
//    cin >> n;
//    int e = n-1;
//    int **edges = new int*[e];
//    for(i=0;i<e;i++){
//        edges[i] = new int[2];
//    }
//    
//    for(i=0;i<e;i++){
//        cin >> edges[i][0] >> edges[i][1];
//    }
//    
//    
//    getDiameter(edges, e, 1);
//    
//    for(i=1; i<=n;i++){
//        if(diameter[i] > max)
//            max = diameter[i];
//    }
//    cout << max<<endl;
//}
