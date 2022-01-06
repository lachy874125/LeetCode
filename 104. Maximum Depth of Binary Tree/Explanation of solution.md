# Solution 1
Solution 1 uses a recursive helper function `maxDepthHelper` to find the maximum depth. `maxDepthHelper` takes the current `TreeNode*` and the current depth `curr_depth`. If there are no children, the function returns `curr_depth` otherwise it calls itself, passing the left and right children. The function returns the max of the depths of the left path and right path.

Time complexity: O(n) - the solution must touch every `TreeNode` in the tree.
Space complexity: O(n) - for each node touched, three variables are added which is a linear growth rate.

# Solution 2
Solution 2 also uses recursion but is much simpler. The code simply checks if the current node = `nullptr` and if so returns zero. Otherwise it calls itself passing its children and returns the max of the value they return plus one. The logic is that the solution will eventually reach the deepest node(s) which will return a value of 0. Each node above it will return the value below plus one, essentially counting the depth of the deepest node backwards.

Time complexity: O(n) - the solution must touch every `TreeNode` in the tree.
Space complexity: O(max height) - the function stack is largest when we have reached the deepest node. For a perfectly balanced binary tree, the space complexity will be O(log n). For a completely unbalanced tree, the space complexity will be O(n).