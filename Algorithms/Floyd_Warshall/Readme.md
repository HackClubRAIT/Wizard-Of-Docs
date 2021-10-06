# ⭐ Floyd_Warshall


Floyd–Warshall algorithm is an algorithm for finding shortest paths in a weighted graph with positive or negative edge weights (but with no negative cycles) </BR>

##### Algorithm
Create a |V| x |V| matrix               // It represents the distance between every pair of vertices as given </BR>
For each cell (i,j) in M do- </BR>
if i = = j</BR>
M[ i ][ j ] = 0                 // For all diagonal elements, value = 0</BR>
if (i , j) is an edge in E</BR>
M[ i ][ j ] = weight(i,j)       // If there exists a direct edge between the vertices, value = weight of edge</BR>
else</BR>
M[ i ][ j ] = infinity          // If there is no direct edge between the vertices, value = ∞</BR>
for k from 1 to |V|</BR>
for i from 1 to |V|</BR>
for j from 1 to |V|</BR>
if M[ i ][ j ] > M[ i ][ k ] + M[ k ][ j ]</BR>
M[ i ][ j ] = M[ i ][ k ] + M[ k ][ j ]</BR>

##### Problem :
![fw](https://user-images.githubusercontent.com/65402647/136140246-dcb5f9c5-76ff-42a4-a6a5-d82870251d75.png)

#### STEPS
We initialize the solution matrix same as the input graph matrix as a first step. Then we update the solution matrix by considering all vertices as an intermediate vertex. </BR>
The idea is to one by one pick all vertices and update all shortest paths which include the picked vertex as an intermediate vertex in the shortest path.</BR>
When we pick vertex number k as an intermediate vertex, we already have considered vertices {0, 1, 2, .. k-1} as intermediate vertices. </BR>
For every pair (i, j) of source and destination vertices respectively, there are two possible cases.</BR>
k is not an intermediate vertex in shortest path from i to j. We keep the value of dist[i][j] as it is.</BR>
k is an intermediate vertex in shortest path from i to j. We update the value of dist[i][j] as dist[i][k] + dist[k][j].</BR>

### Program in C :
#include<stdio.h></BR>
int min(int,int);</BR>
void floyds(int p[10][10],int n)</BR>
{</BR>
 int i,j,k;</BR>
 for(k=1;k<=n;k++)</BR>
  for(i=1;i<=n;i++)</BR>
   for(j=1;j<=n;j++)</BR>
    if(i==j)</BR>
     p[i][j]=0;</BR>
    else</BR>
     p[i][j]=min(p[i][j],p[i][k]+p[k][j]);</BR>
}</BR>
int min(int a,int b)</BR>
{</BR>
 if(a<b)</BR>
  return(a);</BR>
 else</BR>
  return(b);</BR>
}</BR>
void main()</BR>
{</BR>
 int p[10][10],w,n,e,u,v,i,j;;</BR>
 printf("\n Enter the number of vertices:");</BR>
 scanf("%d",&n);</BR>
 printf("\n Enter the number of edges:\n");</BR>
 scanf("%d",&e);</BR>
 for(i=1;i<=n;i++)</BR>
 {</BR>
  for(j=1;j<=n;j++)</BR>
   p[i][j]=999;</BR>
 }</BR>
 for(i=1;i<=e;i++)</BR>
 {</BR>
  printf("\n Enter the end vertices of edge%d with its weight \n",i);</BR>
  scanf("%d%d%d",&u,&v,&w);</BR>
  p[u][v]=w;</BR>
 }</BR>
 printf("\n Matrix of input data:\n");</BR>
 for(i=1;i<=n;i++)</BR>
 {</BR>
  for(j=1;j<=n;j++)</BR>
   printf("%d \t",p[i][j]);</BR>
  printf("\n");</BR>
 }</BR>
 floyds(p,n);</BR>
 printf("\n Transitive closure:\n");</BR>
 for(i=1;i<=n;i++)</BR>
 {</BR>
  for(j=1;j<=n;j++)</BR>
   printf("%d \t",p[i][j]);</BR>
  printf("\n");</BR>
 }</BR>
 printf("\n The shortest paths are:\n");</BR>
 for(i=1;i<=n;i++)</BR>
  for(j=1;j<=n;j++)</BR>
  {</BR>
   if(i!=j)</BR>
    printf("\n <%d,%d>=%d",i,j,p[i][j]);</BR>
  }</BR>
}</BR>

##### Output: 
![image6](https://user-images.githubusercontent.com/65402647/136140129-856840e8-fca4-4a8c-be71-b1090821b702.png)

#### ⏲️ Time Complexities:
Floyd Warshall Algorithm consists of three loops over all the nodes.</BR>
The inner most loop consists of only constant complexity operations.</BR>
Hence, the asymptotic complexity of Floyd Warshall algorithm is O(n3).</BR>
Here, n is the number of nodes in the given graph.</BR>

#### 👾 Space complexities:
Space complexity: O(n2)
