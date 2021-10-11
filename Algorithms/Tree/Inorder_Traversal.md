# ⭐ Inorder Tree Traversal (Left👈 -> Root☝ -> Right👉)
In computer science, tree traversal (also known as tree search and walking the tree) is a form of graph traversal and refers to the process of visiting (e.g. retrieving, updating, or deleting) each node in a tree data structure, exactly once. Such traversals are classified by the order in which the nodes are visited. The following algorithms are described for a binary tree, but they may be generalized to other trees as well.
#### Example: 
##### Input: `root node` *(Pointer)* 
##### Output: `A B C D E F G H I `
##### Explanation: 
### Consider structure of Tree Node for clear understanding
##### Node consist of value and pointer to its left and right child
```py
class Node:
   def __init__(self, data):
      self.left = None
      self.right = None
      self.data = data
```


![tree](https://upload.wikimedia.org/wikipedia/commons/7/75/Sorted_binary_tree_ALL_RGB.svg)<br/>
- Recursively traverse the current node's left subtree.
- Visit the current node (in the figure: position green).
- Recursively traverse the current node's right subtree.

##### Note
In a binary search tree ordered such that in each node the key is greater than all keys in its left subtree and less than all keys in its right subtree, in-order traversal retrieves the keys in ascending sorted order.
> #### Recursive
### Pseudo Code
``` js
procedure inorder(node)
    // if no node then backtrack
    if node = null
        return
    
    inorder(node.left)
    visit(node)
    inorder(node.right)
```
### Code `Python`
``` py
def inorder(root):
  if not root:
    return 
  inorder(root.left)
  print(root.data)
  inorder(root.right)
```

> #### Iterative
### Pseudo Code
``` js
procedure iterativeInorder(node)
    stack ← empty stack
    while not stack.isEmpty() or node ≠ null
        if node ≠ null
            stack.push(node)
            node ← node.left
        else
            node ← stack.pop()
            visit(node)
            node ← node.right
```
### Code `Python`
``` py
def iterativeInorder(root):
  stack = []
  temp = root
  while len(stack) and temp:
    if temp:
      stack.append(temp)
      temp = temp.left
    else:
      temp = stack.pop()
      print(temp.data)
      temp = temp.right   
```


#### ⏲️ Time Complexities:
`O(n)`  *As we are visiting every node* 
<br/>
#### 👾 Space complexities:
`O(n)`  *recursion stack space*
