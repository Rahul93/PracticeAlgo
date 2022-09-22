#include<bits/stdc++.h>
using namespace std;


class TrieNode {
	public:
    vector<TrieNode*> children{vector<TrieNode*>(10, NULL)};
    bool isLeafNode;
    TrieNode(){
        this->isLeafNode = false;
    }
};

void delete_recur(TrieNode*& root){
    for(int i=0;i<10;i++){
        if(root->children[i]){
            delete_recur(root->children[i]);

        }
    }
    delete root;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        TrieNode *trie = new TrieNode();
        bool flag = true;
        while(n--){
            string s;
            cin >> s;
            if(flag){
                TrieNode *ptr = trie;
                for(int i=0;i<s.size();i++) {
                    if(!ptr->children[s[i]-'0']){
                        TrieNode *temp = new TrieNode();
                        ptr->children[s[i]-'0'] = temp;

                    }
                    ptr = ptr->children[s[i]-'0'];
                     if(ptr->isLeafNode){
                            flag = false;
                            break;
                     }
                }

                ptr->isLeafNode = true;
                for(int i=0;i<10;i++){
                    if(ptr->children[i]){
                        flag = false;
                            break;
                    }
                }
            }

        }
        if(flag)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
        delete_recur(trie);
    }

}
