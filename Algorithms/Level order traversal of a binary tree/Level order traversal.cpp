// Given a Binary Tree, print the nodes of the tree in a 
// level order traversal. For example, for the below given Binary Tree
// the level order traversal will print 1, 2, 3, 4, 5, 6, 7

#include<iostream>
using namespace std;
#define False 0
#define True 1
int nextLevelExist=True;

struct Node{
    int value;
    struct Node *left;
    struct Node *right;
}n1,n2,n3,n4,n5,n6,n7;

struct Node *createBinaryTree(){

/*              n1
              /    \   
            n2      n3
           /  \    /   \
        n4    n5  n6    n7       */ 

    n1.value = 1;
    n1.left  = &n2;
    n1.right = &n3;
    n2.value = 2;
    n2.left  = &n4;
    n2.right = &n5;
    n3.value = 3;
    n3.left  = &n6;
    n3.right = &n7;
    n4.value = 4;
    n4.left  = NULL;
    n4.right = NULL;
    n5.value = 5;
    n5.left  = NULL;
    n5.right = NULL;
    n6.value = 6;
    n6.left  = NULL;
    n6.right = NULL;
    n7.value = 7;
    n7.left  = NULL;
    n7.right = NULL;

    return &n1;
}

int printLevel(struct Node *root,int levelNo){
    
    if(levelNo && root){
        printLevel(root->left,levelNo-1);   
        printLevel(root->right,levelNo-1);
    }else if(root){
        cout<<root->value<<" ";
        if(root->left || root->right)
            nextLevelExist = True;
    }
}

void printLevelOrder(struct Node *root){
    int level=0;
    while(nextLevelExist){
        nextLevelExist = False;
        printLevel(root,level);
        level++;
    }
}

int main(){
    struct Node *root;
    root = createBinaryTree();
    printLevelOrder(root);
}
