# ⭐ Floyd_Warshall


Floyd–Warshall algorithm is an algorithm for finding shortest paths in a weighted graph with positive or negative edge weights (but with no negative cycles)

##### Algorithm
Create a |V| x |V| matrix               // It represents the distance between every pair of vertices as given
For each cell (i,j) in M do-
if i = = j
M[ i ][ j ] = 0                 // For all diagonal elements, value = 0
if (i , j) is an edge in E
M[ i ][ j ] = weight(i,j)       // If there exists a direct edge between the vertices, value = weight of edge
else
M[ i ][ j ] = infinity          // If there is no direct edge between the vertices, value = ∞
for k from 1 to |V|
for i from 1 to |V|
for j from 1 to |V|
if M[ i ][ j ] > M[ i ][ k ] + M[ k ][ j ]
M[ i ][ j ] = M[ i ][ k ] + M[ k ][ j ]

##### Problem :
![fw](https://user-images.githubusercontent.com/65402647/136140246-dcb5f9c5-76ff-42a4-a6a5-d82870251d75.png)

#### STEPS
We initialize the solution matrix same as the input graph matrix as a first step. Then we update the solution matrix by considering all vertices as an intermediate vertex. 
The idea is to one by one pick all vertices and update all shortest paths which include the picked vertex as an intermediate vertex in the shortest path.
When we pick vertex number k as an intermediate vertex, we already have considered vertices {0, 1, 2, .. k-1} as intermediate vertices. 
For every pair (i, j) of source and destination vertices respectively, there are two possible cases.
k is not an intermediate vertex in shortest path from i to j. We keep the value of dist[i][j] as it is.
k is an intermediate vertex in shortest path from i to j. We update the value of dist[i][j] as dist[i][k] + dist[k][j].

### Program in C :
#include<stdio.h>
int min(int,int);
void floyds(int p[10][10],int n)
{
 int i,j,k;
 for(k=1;k<=n;k++)
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
    if(i==j)
     p[i][j]=0;
    else
     p[i][j]=min(p[i][j],p[i][k]+p[k][j]);
}
int min(int a,int b)
{
 if(a<b)
  return(a);
 else
  return(b);
}
void main()
{
 int p[10][10],w,n,e,u,v,i,j;;
 printf("\n Enter the number of vertices:");
 scanf("%d",&n);
 printf("\n Enter the number of edges:\n");
 scanf("%d",&e);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
   p[i][j]=999;
 }
 for(i=1;i<=e;i++)
 {
  printf("\n Enter the end vertices of edge%d with its weight \n",i);
  scanf("%d%d%d",&u,&v,&w);
  p[u][v]=w;
 }
 printf("\n Matrix of input data:\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
   printf("%d \t",p[i][j]);
  printf("\n");
 }
 floyds(p,n);
 printf("\n Transitive closure:\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
   printf("%d \t",p[i][j]);
  printf("\n");
 }
 printf("\n The shortest paths are:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {
   if(i!=j)
    printf("\n <%d,%d>=%d",i,j,p[i][j]);
  }
}

##### Output: 
![image6](https://user-images.githubusercontent.com/65402647/136140129-856840e8-fca4-4a8c-be71-b1090821b702.png)

#### ⏲️ Time Complexities:
Floyd Warshall Algorithm consists of three loops over all the nodes.
The inner most loop consists of only constant complexity operations.
Hence, the asymptotic complexity of Floyd Warshall algorithm is O(n3).
Here, n is the number of nodes in the given graph.

#### 👾 Space complexities:
Space complexity: O(n2)
