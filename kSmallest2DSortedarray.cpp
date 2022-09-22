#include<iostream>
#include<queue>
using namespace std;

class customNode{
    public:
    int data;
    int row;
    int col;
    customNode(int data, int row, int col) {
        this->data = data;
        this->row = row;
        this->col = col;
    }
};

class Compare {
public:
    bool operator() (customNode cs1, customNode cs2){
        return (cs1.data > cs2.data);
    }
};
int kSmallest(int **mat, int x, int y, int k){
    
    priority_queue<customNode,vector<customNode>,Compare>pq;
    int i;
    
    for(i=0; i< y ;i++){
        customNode cs(mat[0][i], 0 ,i);
        pq.push(cs);
    }
    
    i=1;
    while(i<k){
        customNode cs = pq.top();
        pq.pop();
        customNode temp(mat[cs.row+1][cs.col], cs.row+1, cs.col);
        pq.push(temp);
        i++;
    }
    return (pq.top()).data;
}

int main() {
    
    int x,y,i,j,k;
    
    cin >> x >> y;
    
    int **mat = new int*[x];
    
    for(i=0;i<x;i++)
        mat[i] = new int[y];
    
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cin>> mat[i][j];
        }
    }
    
    
    cin >> k;
    
    cout << kSmallest(mat, x, y,k);
    
}
