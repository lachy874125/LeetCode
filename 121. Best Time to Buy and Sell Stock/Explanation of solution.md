# Solution 1
Solution 1 takes a brute-force approach. Two iterators are created, one in front, the other always behind it. The solution checks every pair for the profit it creates and returns the max profit.

Time complexity: O(n^2)
Space complexity: O(1)

# Solution 2
Two indexes `i1` and `i2` are used which start at the first and second positions of the vector. `i2` begins iterating forward while `i1` remains at the beginning. For every iteration, the maximum profit is kept updated. If the profit becomes negative, `i1` moves forward to `i2`. This way `i1` will sink to lower and lower values. This continues until `i2` has iterated the whole vector at which point the solution will have found the largest profit.

Time complexity: O(n) - the vector is iterated through once
Space complexity: O(1) - the number of variables is constant