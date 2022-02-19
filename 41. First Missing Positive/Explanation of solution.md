# Solution 1
This solution uses a hash set to store all positive integers in the array. The algorithm then goes through the hash table to find the first missing positive integer.

Time complexity: O(n) - the array is iterated through once and the hash table is iterated through at most n times

Space complexity: O(n) - there are at most n entries in the hash table

# Solution 2
This algorithm uses the input vector as a hash set. The position of each `num` is chosen via the hash function `num % nums.size()`. This means that element `2` should go to position `2` if the vector size is greater than `2`. It also means that, for example, for a vector of size `5`, an element `7` should also be in position `2`. But since `7` is greater than `2` we should prioritise `2` since if we remove `2` then the algorithm might determine that `2` is the first missing positive integer. The algorithm goes through the entire vector and moves every element to its correct location, then goes through and finds the lowest missing positive.

Time complexity: O(n) - the array is iterated through once plus all swaps. The maximum amount of swaps is n since after n swaps every element will be in the correct location

Space complexity: O(1) - no extra data structures are used

# Solution 3
This algorithm uses the same high-level logic as Solution 2 with one optimisation and a much simpler implementation. The optimisation is that if an element is greater than `nums.size()` then it can be ignored as there is no possible way it can be reached when doing the final check for the missing positive integer. In other words, the largest possible missing integer is equal to `nums.size()` and this would only occur if the vector contains the digits `1` to `nums.size()`. For each position in the vector, the algorithm swaps that element with the element in its correct position until the number is nonpositive, greater than `nums.size()`, or a duplicate.

Time complexity: O(n) - same as Solution 2
Space complexity: O(1) - same as Solution 2