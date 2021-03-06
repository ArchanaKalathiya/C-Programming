# Tree Traversals

Traversal is a process to visit all the nodes of a tree and may print their values too.

- All nodes are connected via edges (links), hence we always start from the root (head) node. That is, we cannot randomly access a node in a tree. There are three ways which we use to traverse a tree −
  - In-order Traversal
  - Pre-order Traversal
  - Post-order Traversal
- Generally, we traverse a tree to search or locate a given item or key in the tree or to
  print all the values it contains.

## Preoder Traversal

In this traversal method, the root node is
visited first, then the left subtree and
finally the right subtre

### Algorithm

1. Visit the root nodes 
2. Recusrsively visit the left subtree .
3. Recursively visit the right subtree.

### Time Complexity

Time complexity of Preorder is O(n)

## Postorder Traversal
In this traversal method, the root node 
is visited last, hence the name. First 
we traverse the left subtree, then the 
right subtree and finally the root node.

### Algorithm 

1. Recursively traverse the left subtree.
2. Recursively visit the right subtree.
3. Visit the root nodes.

### Time complexity 
Time complexity of Postorder is O(n)

## Inorder Travesal

- If a binary tree is traversed in-order, the output will produce sorted key values in an ascending order.
- Inorder traversal gives nodes in non-decreasing order. 
- To get nodes of BST in non-increasing order, a variation of Inorder traversal where Inorder traversal s reversed can be used. 

### Algorithm
1. Recursively visit the left subtree.
2. Visit the root node .
3. Recursively visit the right subtree .

### Time complexity 
If a tree has n nodes, then each node is visited only once in inorder traversal and hence the complexity is O(n).