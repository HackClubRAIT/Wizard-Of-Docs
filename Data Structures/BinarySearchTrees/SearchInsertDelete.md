# Introduction to Binary Search Trees
● In a binary search tree (BST), the left node of a vertex should always be lesser than the root.

● Let's say a node containing value 9 can’t be stored anywhere in the left subtree of a node containing value 5. It has to be stored in somewhere in the right subtree only. 

● Thus, every node in the left subtree of a node always has lesser value than it, and every node in the right subtree of a node always has a greater value than it.

## SEARCHING for a node with given value in BST:-
Searching in a BST is a very important concept since the binary search algorithm is based on this. The binary search is an excellent searching algorithm due to its time complexity of O(log N), where N is the size of the sample set. Logarithmic complexity programs take way less time as compared to those with linear time complexity, for very large number of inputs.

<pre>Algorithm: The rule is, if the given value (to be searched) is greater than the current node’s value, we continue the search in only the right subtree of the current node. And if the given value is lesser, the search goes on only in the left subtree. Since we are using recursion here, the recursive calls foe the left and the right subtree are referred to as the traversal here.</pre>

### Code for SEARCHING in a BST:-

```
bool searchInTree(node *root, int val)
{
    bool a = false, b = false;
    if (!root)
        return false;
    if (root->val == val)
        return true;
    else if (val > root->val)
        a = searchInTree(root->right, val);
    else
        b = searchInTree(root->left, val);
    return a || b;  //if it finds the given value in either left or right subtree, TRUE will be returned, otherwise FALSE
}
```

### Time Complexity:-
For searching an element, we have to traverse all elements. Therefore, searching in binary search tree has worst case time complexity of O(n). In general, time complexity is O(h) where h is height of BST.

## INSERTING a node with given value in BST:-
Insertion in BST takes place quite similar to the search algorithm, the only difference being that whenever any of the nodes while traversal is found to be NULL, the given value is inserted there.

<pre>ALGORITHM: Similar to binary search, if the given value to be inserted is greater than the value of the current node, we traverse in its right subtree, and if given value is lesser than the current node value, we traverse in the left subtree. Our aim is to find an empty branch where we can insert the given value node.</pre>

### Code for INSERTING in a BST:-

```
node *insert(node *root, int val)
{
    if (!root)  //whenever the current node passed to tbe recursive function is NULL, we know that there's a vacancy here 
        return new node(val);  // creating a new node with the given value and returning that
    if (val > root->val)
        root->right = insert(root->right, val);
    else
        root->left = insert(root->left, val);
    return root;
}

```

### Time Complexity:-
In order to insert an element as left child, we have to traverse all elements. Therefore, insertion in binary tree has worst case complexity of O(n).

## DELETION of a node with given value in BST:-
The deletion algorithm in a BST is comparatively easy as compared to that in a Binary Tree. We just have to delete the current node if its value is equal to the given value, and put its right node in its place if it exists, otherwise the left node.

<pre>ALGORITHM: Let's take an example of the BST, suppose we want to delete the node with value x. We will traverse to that node and see if its right node exists and is not NULL. If it exists, we create a new node with the right node’s value and put it at the current node’s place. If the right node doesn’t exist,we connect the left node in place of the current node.</pre>

### Code for Deleting a node in a BST:-

```
struct node* deleteNode(struct node* root, int key){
   if (root == NULL) return root;    //base case of recursion
      if (key < root->key)
         root->left = deleteNode(root->left, key);        //traversing in the left subtree
      else if (key > root->key)
         root->right = deleteNode(root->right, key);      //traversing in the right subtree
   else{
      if (root->left == NULL){           //if only right node present
         struct node *temp = root->right;
         free(root);
         return temp;
      }
      else if (root->right == NULL){      //if only left node present
         struct node *temp = root->left;
         free(root);
         return temp;
      }
      struct node* temp = minValueNode(root->right);              //if both left and right nodes are NULL, none present
      root->key = temp->key;
      root->right = deleteNode(root->right, temp->key);
   }
   return root;
}

```
### Time Complexity:-
For deletion of element, we have to traverse all elements to find that element(assuming we do breadth first traversal). Therefore, deletion in binary tree has worst case complexity of O(n).

## Note:
So, now you know why using a BST is a really time efficient data structure. Its basic operations such as insertion, deletion and search take O(log N) time complexity to be processed.