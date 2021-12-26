# Solution 1
My first solution uses two ListNode pointers to iterate through the existing structure of the list and make each node point to `head`. If there is a cycle, it will eventually reach a previously touched node whose `next` field points to `head`. If there is no cycle, it will eventually reach `nullptr`.

Time complexity: O(n) - the number of iterations equals the number of nodes.
Space complexity: O(1) - there are only ever two ListNode pointers regardless of list size.

# Solution 2
This solution is not original, it was discovered through research. This solution again uses two ListNode pointers to iterate through the list. One pointer moves one node at a time (slow), the other moves two nodes at a time (fast). If there is a cycle, they will eventually meet. If there is no cycle, the fast one will arrive at `nullptr`.

Time complexity: O(n)
Space complexity: O(1)

If there is no cycle, solution 2 will complete in roughly half the time of the solution 1. If there is a cycle, the time to completion will vary depending on where the slow and fast pointers are once they both enter the cycle.