# Algorithms

## Dijkstra's Algorithm

- Dijkstra's algorithm is an algorithm for finding the shortest paths between nodes in a graph, which may represent, for example, road networks.

#### Algorithm
 1. Create a set sptSet (shortest path tree set) that keeps track of vertices included in the shortest-path tree, i.e., whose minimum distance from the source is calculated and finalized. Initially, this set is empty. 
2. Assign a distance value to all vertices in the input graph. Initialize all distance values as INFINITE. Assign distance value as 0 for the source vertex so that it is picked first. 
3. While sptSet doesn’t include all vertices 
    -  Pick a vertex u which is not there in sptSet and has a minimum distance value. 
     -  Include u to sptSet. 
    -  Update distance value of all adjacent vertices of u
          
4. To update the distance values, iterate through all adjacent vertices. For every adjacent vertex v, if the sum of distance value of u (from source) and weight of edge u-v, is less than the distance value of v, then update the distance value of v.

#### Time Complexity
 Time complexity of Dijkstra's algorithm is O ( V 2 ) O(V^2) O(V2) where V is the number of verices in the graph.


## Floyd's Algorithm

- Floyd-Warshall Algorithm is an algorithm for finding the shortest path between all the pairs of vertices in a weighted graph. This algorithm works for both the directed and undirected weighted graphs. But, it does not work for the graphs with negative cycles (where the sum of the edges in a cycle is negative).

- A weighted graph is a graph in which each edge has a numerical value associated with it.

- Floyd-Warhshall algorithm is also called as Floyd's algorithm, Roy-Floyd algorithm, Roy-Warshall algorithm, or WFI algorithm.

- This algorithm follows the dynamic programming approach to find the shortest paths.
#### Algorithm
1. Initialize the shortest paths between any 2 vertices with Infinity.

2. Find all pair shortest paths that use 0 intermediate vertices, then find the shortest paths that use 1 intermediate vertex and so on.. until using all N vertices as intermediate nodes.

3. Minimize the shortest paths between any 2 pairs in the previous operation.

4. For any 2 vertices (i,j) , one should actually minimize the distances between this pair using the first K nodes, so the shortest path will be: min(dist[i][k]+dist[k][j],dist[i][j]).
#### Time Complexity

There are three loops. Each loop has constant complexities. So, the time complexity of the Floyd-Warshall algorithm is O(n3).

## Graph Traversal's
The graph has two types of traversal algorithms. These are called the Breadth First Search and Depth First Search.
 
- Breadth first traversal
    - Breadth First Search (BFS) algorithm traverses a graph in a breadth ward motion and uses a queue to remember to get the next vertex to start a search. 
- Depth first traversal
    - Depth First Search (DFS) algorithm traverses a graph in a depth ward motion and uses a stack to remember to get the next vertex to start a search.


#### Algorithm
- BFS 

    1. Visit the adjacent unvisited vertex. Mark it as visited. Display it. Insert it in a queue. 
    2. If no adjacent vertex is found, remove the first vertex from the queue. 
    3. Repeat Rule 1 and Rule 2 until the queue is empty. 

- DFS
    1. Visit the adjacent unvisited vertex. Mark it as visited. Display it. Push it in a stack. 
    2. If no adjacent vertex is found, pop up a vertex from the stack. (It will pop up all the vertices from the stack, which do not have adjacent vertices.) 
    3. Repeat Rule 1 and Rule 2 until the stack is empty. 

### Time Complexity
- BFS - 
BFS is O(V + E) when Adjacency List is used and O(V^2) when Adjacency Matrix is used, where V stands for vertices and E stands for edges. Space complexity of O(|V|) = O(b^d)
- DFS - 
Time complexity is O(V)
Space complexity O(h) where h is the maximum height of the tree. 



## Knapsack Algorithm
- The knapsack algorithm can be used to solve a number of programming problems 
- This algorithm is a part of the dynamic programming. In dynamic programming we solve the bigger problem by diving it into smaller problems. Keep the result of the smaller problems in cache and then solving the bigger problem using the cache.

#### Algorithm 
1. Divide the problem with having a smaller knapsack with smaller problems. We can start with knapsack of 0,1,2,3,4 capacity.
2. M[items+1][capacity+1] is the two dimensional array which will store the value for each of the maximum possible value for each sub problem. The row and column contains one items extra considering the solution with zero capacity and no item.

    M[i][capacity] = max(E, I)

    where

    E(If excluded) = M[i-1][capacity] and

    I(If included and small enough) = value(i) + M[i-1][capacity – weight]

#### Time complexity 
O (N*W). where 'N' is the number of weight elements and 'W' is the capacity of the knapsack.
## Kruskal's Algorithm
- Kruskal’s Algorithm is a famous greedy algorithm.
- It is used for finding the Minimum Spanning Tree (MST) of a given graph.
- To apply Kruskal’s algorithm, the given graph must be weighted, connected and undirected. [no cycles]

#### Algorithm 
1. Sort all the edges from low weight to high weight.
2.  Take the edge with the lowest weight and use it to connect the vertices of graph.
3. If adding an edge creates a cycle, then reject that edge and go for the next least weight edge
4. Keep adding edges until all the vertices are connected and a Minimum Spanning Tree (MST) is obtained.

#### Time Complexity 
Kruskal's algorithm's time complexity is O(E log V), V being the number of vertices. 
## Prim's Algorithm
-   Prim's algorithm is a minimum spanning tree algorithm that takes a graph as input and finds 
the subset of the edges of that graph which form a tree that includes every vertex
-   It has the minimum sum of weights among all the trees that can be formed from the graph
-   It falls under a class of algorithms called greedy algorithms that find the local optimum in the 
hopes of finding a global optimum. We start from one vertex and keep adding edges with the lowest weight until we reach our goal.
#### Algorithm 
1. Initialize the minimum spanning tree with a vertex chosen at random.
2. Find all the edges that connect the tree to new vertices, find the minimum and add it to the 
tree
3. Keep repeating step 2 until we get a minimum spanning tree

#### Time Complxity
The time complexity of the Prim's Algorithm is O ( ( V + E ) l o g V ) because each vertex is inserted in the priority queue only once and insertion in priority queue take logarithmic time.
## Warshall's Algorithm

### Topological Sorting

### Transitive Closure
