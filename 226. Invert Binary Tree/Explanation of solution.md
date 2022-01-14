# Solution 1
As this is a binary tree, it lends itself naturally to a recursive solution. This recursive function swaps the two children of a node using a `temp` variable. The function then calls itself recursively on the two children of the node, their existence permitting.

Time complexity: O(n) - each node is visited once
Space complexity: O(h) - each recursive function uses O(1) space. The maximum amount of functions on the stack is proportional to the height h