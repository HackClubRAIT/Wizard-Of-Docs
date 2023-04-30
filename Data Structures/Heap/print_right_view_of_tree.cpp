/* INput
1 2 4 6 -1 -1 7 10 -1 -1 11 -1 -1 5 8 -1 -1 9 -1 -1 3 -1 -1
Output
1 3 5 9 11
*/

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs) + 1;

}
void printKthLevel(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
    return;

}
void printAllLevels(node*root){
    int H = height(root);

    for(int i=1;i<=H;i++){
        printKthLevel(root,i);
        cout<<endl;
    }
    return;
}

void printrightview(node *root,int level,int &maxlevel){
if(root==NULL)
return;

if(maxlevel<level){
maxlevel=level;
cout<<root->data<<" ";
}

printrightview(root->right,level+1,maxlevel);
printrightview(root->left,level+1,maxlevel);
}
istream& operator>>(istream& is, node*& root)
{
    root=buildTree();
    return is;
}
ostream& operator<<(ostream& os, node* root)
{
    printAllLevels(root);
    return os;
}
int main(){
node *root=NULL;
cin>>root;
#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int maxlevel = -1;
printrightview(root,0,maxlevel);
cout<<endl;
cout<<root;
}
