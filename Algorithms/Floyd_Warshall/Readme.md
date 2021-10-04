# Floyd-Warshall Shortest Path Algorithm

Contains 3 different implementations of Floyd-Warshall algorithm in C:

1. Recursive
2. Recursive with memorisation
3. Dynamic Programming (with path reconstruction)
 <br/>*To disable path reconstruction comment the line "#DEFINE PATH".
 <br/><br/>
 ## Input
 - Number of nodes
 - Distance of: 
  <br/> node1->node0
  <br/> node2->node1 &nbsp;&nbsp; node2->node0
  <br/> node3->node2 &nbsp;&nbsp; node3->node1 &nbsp;&nbsp; node3->node0 
  <br/>(0 if there is no path)
  
  <br/><br/>
  Example:
  <br/>
  5 <br/>
  3 <br/>
  1 0 <br/>
  2 4 7 <br/>
  3 0 0 8 <br/>
  
  
  ![alt text](https://ucarecdn.com/a67cb888-aa0c-424b-8c7f-847e38dd5691/)
   


 
