# Algorithms

## Dijkstra's Algorithm

- Dijkstra's algorithm is an algorithm for finding the shortest paths between nodes in a graph, which may represent, for example, road networks.

#### Algorithm
 - Create a set sptSet (shortest path tree set) that keeps track of vertices included in the shortest-path tree, i.e., whose minimum distance from the source is calculated and finalized. Initially, this set is empty. 
- Assign a distance value to all vertices in the input graph. Initialize all distance values as INFINITE. Assign distance value as 0 for the source vertex so that it is picked first. 
- While sptSet doesn’t include all vertices 
    -  Pick a vertex u which is not there in sptSet and has a minimum distance value. 
     -  Include u to sptSet. 
    -  Update distance value of all adjacent vertices of u
          
- To update the distance values, iterate through all adjacent vertices. For every adjacent vertex v, if the sum of distance value of u (from source) and weight of edge u-v, is less than the distance value of v, then update the distance value of v.

#### Time Complexity
 Time complexity of Dijkstra's algorithm is O ( V 2 ) O(V^2) O(V2) where V is the number of verices in the graph.


## Floyd's Algorithm

- Floyd-Warshall Algorithm is an algorithm for finding the shortest path between all the pairs of vertices in a weighted graph. This algorithm works for both the directed and undirected weighted graphs. But, it does not work for the graphs with negative cycles (where the sum of the edges in a cycle is negative).

- A weighted graph is a graph in which each edge has a numerical value associated with it.

- Floyd-Warhshall algorithm is also called as Floyd's algorithm, Roy-Floyd algorithm, Roy-Warshall algorithm, or WFI algorithm.

- This algorithm follows the dynamic programming approach to find the shortest paths.

### Time Complexity

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

## Kruskal's Algorithm

## Prim's Algorithm

## Warshall's Algorithm

### Topological Sorting

### Transitive Closure
