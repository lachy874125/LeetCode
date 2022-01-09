# Solution 1
Iterate through listA and copy each pointer into an `unordered_set` (hash table). Then iterate through listB and check if each pointer is in the hash table.

Time complexity: O(m+n) - listA is always iterated through while listB is fully or partially iterated through.
Space complexity: O(m) - every node pointer in listA is copied into the hash table

# Solution 2
I wasn't able to come up with this solution, but researched it. Iterate listA and listB simultaneously checking for equality. When one pointer reaches the end, restart it at the start of the opposite list. If there is an intersection, the pointers will eventually meet. If the lists are the same length, the intersection will be found in the first pass. If they are different lengths, the length difference will be cancelled out once both pointers are restarted at the opposite list and they will then meet in the second pass. If there is no intersection, the pointers will eventually be equal `nullptr`, either on the first or second pass depending on list length differences.

Time complexity: O(m+n) - in the worst case, both lists are iterated through completely twice (no intersection, different lengths).
Space complexity: O(1) - two pointers are used, regardless of list length.