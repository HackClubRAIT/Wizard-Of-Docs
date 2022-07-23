# Invert Binary Tree 

## Problem :
Given the root of a binary tree, invert the tree, and return its root.

### Example 1:

Input: root = [4,2,7,1,3,6,9]

Output: [4,7,2,9,6,3,1]

### Example 2:

Input: root = [2,1,3]

Output: [2,3,1]
#### Constraints:
* The number of nodes in the tree is in the range [0, 100].
* -100 <= Node.val <= 100.

## Approach :
This is a classic tree problem that lends itself nicely to a recursive solution.
* The inverse of an empty tree is the empty tree. (base case)
* The inverse of a tree with root r, and subtrees right and left, is a tree with root r, whose right subtree is the inverse of left, and whose left subtree is the inverse of right.

## Solution Function in Python :

```python
class Solution(object):
    def invertTree(self, root):
        def invert(root):
            if root==None:
                return
            # Put Left Side to Right Side of the Tree 
            # and Right Side to Left Side of the Tree
            root.left,root.right=root.right,root.left
            invert(root.left)
            invert(root.right)
        invert(root)
        return root
```

## Solution Function in C++ :

```cpp
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return root;
        // Get Left Side of the Tree
        TreeNode *lft = invertTree(root->left);
        // Get Right Side of the Tree
        TreeNode *rght = invertTree(root->right);
        // Put Right Side to Left Side of the Tree
        root->left = rght;
        // Put Left Side to Right Side of the Tree
        root->right = lft;
        return root;
    }
};
```

## Time Complexity :
Due to the fact that each node in the tree is only visited once, the time complexity is O(n), where n is the number of nodes in the tree. We can't do better than that since we have to visit each node to reverse it.

## Space Complexity :
In the worst-case scenario, O(h) function calls will be placed on the stack due to recursion, where h is the height of the tree. The space complexity is (n) since h ∈ O(n).
