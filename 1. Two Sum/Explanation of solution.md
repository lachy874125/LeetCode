# Solution 1
The first solution is the brute-force approach, where it checks every possible pair of ints to see if they add up to the target.

- Time comlexity: O(n^2)
- Space complexity: O(1)

This solution uses constant space but is slow.

# Solution 2
The second solution uses a custom-made hash table for rapid lookup. For each `num` in `nums`, the solution first checks the hash table for `target - nums`. If it finds it, the solution returns a vector containing the index of the `target - nums` entry and the current index `i`. If it doesn't find it, the solution creates a hash table entry of `num` with the current index `i`. This allows for a single pass through `nums` creating the hash table entries as it goes along the vector.

- Time complexity: O(n) - the solution iterates once through each element in `nums` which takes O(n) time. The worst case scenario of searching through the hash table takes O(n) time but the amortised complexity is O(1).
- Space complexity: O(n) - the hash table stores at most n entries.

The size of the hash table is constant at 10000. There is no hard reason for choosing that size. The larger the hash table size, the quicker the lookup time but the more memory the solution takes up.

# Solution 3
The third solution has the same logic as solution 2, using the in-built `unordered_map` container instead of a custom hash table. `unordered_map` was used because the container implements its own hash table, allowing for equal time and space complexity as solution 2 with the benefit of writing a lot less code and thus being cleaner. There is no need for ordered data, such as with the `map` container which has slower performance.

- Time complexity: O(n) - the solution iterates once through each element in `nums` which takes O(n) time. The worst case scenario of searching through the hash table takes O(n) time but the amortised complexity is O(1).
- Space complexity: O(n) - the hash table stores at most n entries.
