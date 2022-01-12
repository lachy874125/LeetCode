# Solution 1
Solution 1 uses a recursive helper function. The helper function takes a reference argument of the resultant vector so that each instance can push back to the vector. The function returns `void` . The helper function calls itself on the left child, the pushes the current value to the vector (middle value) then calls itself on the right child.

Time complexity: O(n) - each node is visited once and appended to the resultant vector once
Space complexity: O(n) - vector is same size as number of nodes and worst recursion case is when each node has one child

# Solution 2
Solution 2 uses a stack to implement an iterative solution. The parent nodes are appended to the stack as we descend as far possible to the left. Then we store that value and remove from the stack. Then we move right and start over.

Time complexity: O(n) - each node is visited once and appended once
Space complexity: O(n) - vector is same size as number of nodes