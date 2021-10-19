## Breadth First Search

Breadth-first search (BFS) is an algorithm for exploring a tree or graph.
It starts at the tree root and explores all nodes at the present depth prior to moving on to the nodes at the next depth level.

#### Pseudocode:


 1  procedure BFS(A, root) is
 2      let l be a queue
 3      label root as explored
 4      l.enqueue(root)
 5      while l is not empty do
 6          v := l.dequeue()
 7          if v is the goal then
 8              return v
 9          for all edges from v to w in A.adjacentEdges(v) do
10              if w is not labeled as explored then
11                  label w as explored
12                  l.enqueue(w)

#### Time Complexity:
O(V) where V is the number of nodes.
#### Space Complexity:
O(|V|) = O(b^d)


