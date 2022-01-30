# Solution 1
This solution uses a row-by-row or column-by-column binary search. The binary search is performed along the longest dimension because binary search is O(log n) whereas iterating by row or col is O(n).

Time complexity: O(m log n) if m < n. O(n log m) if n < m.
Space complexity: O(1)

# Solution 2
This solution makes use of the ascending order of rows and columns. If we start at the top right corner, we can decide to move down or left depending on if the current element is less than or greater than `target`. We could also choose to start at the bottom left and move up or right. By choosing these two corners there is only one possible direction to move at any given iteration. If we had chosen the top left, there would always be two directions to move and the space complexity would be exponential. If the algorithm crosses the perimeter of the matrix, the element does not exist.

Time complexity: O(m+n) - if `target` is in the bottem left corner or does not exist, there will be `n+m` iterations to arrive to the solution
Space complexity: O(1)