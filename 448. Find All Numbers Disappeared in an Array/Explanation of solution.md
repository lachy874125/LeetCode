# Solution 1
To achieve the result using no extra space, this solution uses the input vector to mark the positions of the non-missing elements by making them negative. Once this is completed, the input vector is scanned through and the position of any positive element will be a missing value.

For example, using input vector {4,3,2,7,8,2,3,1}, 3 (4 - 1) is the first index to be marked negative. The next is 6 (7-1) and so on. The vector will become:
`{ 4, 3, 2,-7, 8, 2, 3, 1}`
`{ 4, 3, 2,-7, 8, 2,-3, 1}`
`{ 4, 3,-2,-7, 8, 2,-3, 1}`
`{ 4,-3,-2,-7, 8, 2,-3, 1}`

At this point the 'train' of negated indexes has ended, since we have encounted two 3's. We started at index 0 so we then search for the next positive element which is 8 at index 4. The process then repeats until the entire vector has been iterated through:

`{ 4,-3,-2,-7, 8, 2,-3,-1}`
`{-4,-3,-2,-7, 8, 2,-3,-1}`

The only positive elements are at positions 5 and 6 so we return a new vector containing these index values.

Time complexity: O(n) - the array is iterated through twice.
Space complexity: O(1) - ignoring the returned vector (as the problem states), only constant extra space is used