# Solution 1
This solution modifies the input vector to solve the problem. The idea is that each number represents the index location it should be at. So if we encounter a `4` it should be moved to index location `3` (array is 1-based, not 0). If we find a number that is not in the correct location but the correct location already contains the correct number, we have found the duplicate.

The algorithm implements the above logic by stepping through the vector iteratively. As soon as it finds an incorrectly positioned element, it swaps it with the element in the location it needs to go to. This swapping continues until the correct element ends up in the position the algorithm is currently at in the vector. Then the iteration continues until the entire vector has been iterated through or until it finds the first duplicate.

Time complexity: O(n) - each swap results in an element being correctly positioned. Elements that are correctly positioned are never swapped again

Space complexity: O(1) - constant extra space is used

# Solution 2
This solution treats the input vector as a representation of a linked list. E.g. for the vector `[1,3,4,2,6,2,5]`, the `1` is a node that points to position 1, which is a `3` node that points to position 3 and so on. This is visualised in the diagram below. Since there is guaranteed to be a duplicate number, there is guaranteed to be a cycle. The first element encountered in the cycle is the duplicate number. The problem can then be thought of as how do we find the first element in the cycle?

![image](https://user-images.githubusercontent.com/91536829/156753886-fafe6333-0967-4e6c-a880-17c6d79f1b99.png)

To do this, we use two "pointers", one travels slow (one node at a time) and the other travels fast (two nodes at a time). If we let them run until they meet then the fast one has travelled twice the distance as the first:
`2d(slow) = d(fast)`
If we let `x` represent the number of nodes until the first cycle node, and `y` represent the number of nodes from the first cycle node to the point of intersection (as shown in the diagram) then the equation becomes:
`2(x+y) = x + nz + y` where `nz` represents the amount of times `n` the fast pointer has travelled the cycle (length `z`). Solving the equation we get:
`x = nz - y`
In English, this means the number of nodes between the first node and first cycle node is equal to the number of times the fast node has begun at the first cycle node, traversed the cycle `n` times and backtracked until it hit the node of intersection. Therefore, if we now make both pointers slow and move one back to the first node while the other stays at the point of intersection, we can run both pointers and they will meet at the first cycle node.
