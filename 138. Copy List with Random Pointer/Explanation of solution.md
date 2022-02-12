# Solution 1
The algorithm uses a hash map to store pairs of created nodes in the form `<original, copy>`. For each original node a copy node is made. To assign the next pointer, the algorithm searches the `created_nodes` hash map to see if `next` points to a node already created by a `random` pointer pointing to a future node along the list. If one is found, it just points to it, otherwise it creates a new node and stores it in `created_nodes`. To assign the random pointer, the same logic is followed.

Time complexity: O(n) - the original list is iterated once
Space complexity: O(n) - a hash map of n entries is created over the course of the iterations