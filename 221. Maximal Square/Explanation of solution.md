# Solution 1
This solution takes an optimised brute-force approach to solving the problem. The algorithm starts by iterating through every element until it finds a `'1'`. From there it calls the `squareEdge` member which returns the length of the edge of the largest square with its top-right corner at the `'1'` cell. The `squareEdge` function starts with an edge length of 1. It then expands the square by scanning the elements:
- beneath the current square
- to the right of the current square
- the bottom right corner element
If all the scanned elements are 1 then the square is allowed to expand by edge length 1. This process continues until a 0 is found, at which point, `squareEdge` returns the current edge length. `maximalSquare` eventually returns the `max_edge` squared.

The optimisation comes from the central `if` condition in `maximalSquare`. When a `'1'` is located, before it calls `squareEdge` it checks if the distance from the `'1'` to the bottom and right edges is greater than the current `max_edge`. If it is instead less than, then there is no point calling `squareEdge` because the square couldn't possibly be bigger than `max_edge` so it is skipped.

Time complexity: `maximalSquare` has complexity O(mn) and `squareEdge` has complexity O(square area)
Space complexity: O(1)

# Solution 2
This solution takes a dynamic programming approach. The algorithm first makes a new matrix called `square_size` with the same dimensions as `matrix` but with `int` as the underlying data type. The dynamic programming loop iterates through `matrix` until a `'1'` is detected. It then calculates the largest square with its bottom-right edge at the current cell using `square_size` elements immdiately to the west, north, and north-west:
`square_size[y][x] = std::min({square_size[y][x - 1], square_size[y - 1][x], square_size[y - 1][x - 1]}) + 1;`
The algorithm keeps track of the largest element in `square_size` which is the largest square edge found so far.

The loop will not work for elements on the left and top borders of `matrix` so these elements are simply copied into `square_size` as there is no possible square with its bottom-right corner on these borders larger than 1.

Time complexity: O(mn) - each element in `matirx` is iterated through once
Space complexity: O(mn) - there is a new matrix `square_size` that is the same size as `matrix`

# Solution 3
This solution uses the same logic as Solution 2 but instead of creating a whole new matrix, it creates a row vector which sequentially models each row of `square_size`. Where the algorithm usually checks the north and north-west elements, it instead iteratively saves these in temporary variables, which saves us having to use so much extra space.

Time complexity: O(mn)
Space complexity: O(n)