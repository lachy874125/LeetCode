# Solution 1
The solution uses a straight-forward brute force method to solve the problem. We start with the largest possible square size which is equal to the smallest grid dimension. We test every possible square at that size to see if it is a magic square. If none are found the square size currently being checked is reduced by 1 and then every possible square at that size is checked. This continues until a magic square is found. If no 2x2 magic squares are found, the solution returns 1 since every 1x1 square is a magic square.

Time complexity: ??
Space complexity: O(1)