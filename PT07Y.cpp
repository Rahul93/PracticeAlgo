//#include<iostream>
//using namespace std;
//
//int find(int parent[], int a) {
//    if(parent[a] == a){
//        return a;
//    } else {
//        parent[a] = find(parent, parent[a]);
//        return parent[a];
//    }
//    
//}
//
//int main() {
//    int nodes,edges, n1, n2;
//    cin >> nodes >> edges;
//    
//    int *parent = new int[nodes+1];
//    
//    for(int i=1;i< nodes+1; i++) {
//        parent[i] = i;
//    }
//    
//    for(int i=0;i< edges; i++) {
//        cin >> n1 >> n2;
//        
//        if(find(parent, n1) == find(parent, n2)) {
//            cout << "NO";
//            return 0;
//        }
//        parent[find(parent, n1)] = find(parent, n2);
//    }
//    
//    int root = find(parent, 1);
//    for(int i=2;i< nodes+1; i++){
//        if(find(parent, i) != root){
//            cout << "NO";
//            return 0;
//        }
//    }
//    cout << "YES";
//}
