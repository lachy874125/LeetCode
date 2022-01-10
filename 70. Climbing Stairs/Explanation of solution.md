I really enjoyed this problem because I originally tried to solve it mathematically using combinations but quickly ran into overflow issues with the large factorials. I then tried using `double` variables but then ran into precision issues when casting back to `int`. The programmatic solutions I came up with below taught me that trying a completely different approach can sometimes yield far simpler and cleaner solutions.
# Solution 1
I thought of this problem as a binary tree with value `n` at the top. Underneath the root are two children with value `n-1` and `n-2`. These values represent the number of stairs remaining after climbing `1` and `2` stairs respectively. This pattern continues until a child node has value `0` (no more stairs). The number of ways to climb the stairs is equal to the number of childless nodes at the bottom of the tree. Thus, the problem can be solved simply using a recursive function that returns the number of steps of the `n-1` and `n-2` subtrees. The terminating case is when there are `0` or `1` stairs left, at which point we have reached a certain childless node and finished one possible path.

Time complexity: O(2^n) - most nodes have 2 children so the recursive function is called twice for each node.
Space complexity: O(2^n) - most nodes have two children so for each node two values need to be stored in memory.

# Solution 2
The problem with the above solution is that it contains a large amount of repetition and quickly becomes slow. To overcome this issue, we can build up the answer starting at the smallest subtrees `1` and working towards an `n` tree.

For `n=1`, there is `1` path.
For `n=2`, the children are the `n=1` and `n=0` subtrees.
For `n=3`, the children are the `n=2` and `n=1` subtrees.
For `n=4`, the children are the `n=3` and `n=2` subtrees.

This pattern continues. Therefore, for any `n`-tree, the number of ways of climbing it is the sum of the ways of climbing the `n-1` (`prev1`) and `n-2` (`prev2`) trees. This happens to be the fibonacci pattern.

Time complexity: O(n) - the loop is iterated `n` times
Space complexity: O(1) - there is a constant amount of variables required