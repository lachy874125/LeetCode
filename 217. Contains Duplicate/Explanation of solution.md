# Solution 1
The algorithm uses a hash set to quickly store encountered numbers and quickly check if a new number has already been encountered.

Time complexity: O(n) - array is iterated through once and amortised insert/check time of the hash set is O(1)

Space complexity: O(n) - for a distinct array, the algorithm uses n extra space