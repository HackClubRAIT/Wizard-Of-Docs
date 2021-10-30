# Prim's Algorithm

- Prim’s algorithm is used to find the Minimum Spanning Tree(MST) of a connected or undirected graph. Spanning Tree of a graph is a subgraph that is also a tree and includes all the vertices. Minimum Spanning Tree is the spanning tree with a minimum edge weight sum.

## Algorithm
- Step 1: Keep a track of all the vertices that have been visited and added to the spanning tree.

- Step 2: Initially the spanning tree is empty.

- Step 3: Choose a random vertex, and add it to the spanning tree. This becomes the root node.

- Step 4: Add a new vertex, say x, such that x is not in the already built spanning tree. x is connected to the built spanning tree using minimum weight edge. (Thus, x can be adjacent to any of the nodes that have already been added in the spanning tree).
Adding x to the spanning tree should not form cycles.
- Step 5: Repeat the Step 4, till all the vertices of the graph are added to the spanning tree.

- Step 6: Print the total cost of the spanning tree.


## Code (In C++)
  
  #include<iostream>

using namespace std;

// Number of vertices in the graph  
const int V=6;

// Function to find the vertex with minimum key value 
int min_Key(int key[], bool visited[])  
{ 
    int min = 999, min_index;  // 999 represents an Infinite value

    for (int v = 0; v < V; v++) { 
        if (visited[v] == false && key[v] < min) { 
        	// vertex should not be visited
            min = key[v];
			min_index = v;  
        }
    }    
    return min_index;  
}  

// Function to print the final MST stored in parent[]  
int print_MST(int parent[], int cost[V][V])  
{  
    int minCost=0;
	cout<<"Edge \tWeight\n";  
    for (int i = 1; i< V; i++) {
		cout<<parent[i]<<" - "<<i<<" \t"<<cost[i][parent[i]]<<" \n";  
		minCost+=cost[i][parent[i]];
    }
	cout<<"Total cost is"<<minCost;
}  

// Function to find the MST using adjacency cost matrix representation  
void find_MST(int cost[V][V])  
{  
    int parent[V], key[V];
    bool visited[V];

    // Initialize all the arrays 
    for (int i = 0; i< V; i++) { 
        key[i] = 999;    // 99 represents an Infinite value
        visited[i] = false;
        parent[i]=-1;
    }    

    key[0] = 0;  // Include first vertex in MST by setting its key vaue to 0.  
    parent[0] = -1; // First node is always root of MST  

    // The MST will have maximum V-1 vertices  
    for (int x = 0; x < V - 1; x++) 
    {  
        // Finding the minimum key vertex from the 
        //set of vertices not yet included in MST  
        int u = min_Key(key, visited);  

        visited[u] = true;  // Add the minimum key vertex to the MST  

        // Update key and parent arrays
        for (int v = 0; v < V; v++)  
        {
            // cost[u][v] is non zero only for adjacent vertices of u  
            // visited[v] is false for vertices not yet included in MST  
            // key[] gets updated only if cost[u][v] is smaller than key[v]  
            if (cost[u][v]!=0 && visited[v] == false && cost[u][v] < key[v])
            {  
                parent[v] = u;
                key[v] = cost[u][v];  
            }        
        }
    }

    // print the final MST  
	print_MST(parent, cost);  
}  

// main function
int main()  
{  
    int cost[V][V];
	cout<<"Enter the vertices for a graph with 6 vetices";
    for (int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
			cin>>cost[i][j];
        }
    }
	find_MST(cost);  

    return 0;  
}  


- Output:
![image](https://user-images.githubusercontent.com/71593494/136537495-0108de97-e885-49bd-81c4-676b6bf3a367.png)



## Time Complexity:

- Time complexity of the above C++ program is O(V2) since it uses adjacency matrix representation for the input graph. However, using an adjacency list representation, with the help of binary heap, can reduce the complexity of Prim's algorithm to O(ElogV).


## Real Time Examples:
1>> Designing the networks including computer networks, telecommunication networks, transportation networks, electricity grid and water supply networks.

2>> Used in algorithms for approximately finding solutions to problems like Travelling Salesman problem, minimum cut problem, etc.
  - The objective of a Travelling Salesman problem is to find the shortest route in a graph that visits each vertex only once and returns back to the source vertex.
  -  A minimum cut problem is used to find the minimum number of cuts between all the pairs of vertices in a planar graph. A graph can be classified as planar if it can be drawn in a plane with no edges crossing each other. For example,
3>> Analysis of clusters.
4>> Handwriting recognition of mathematical expressions.
5>> Image registration and segmentation
