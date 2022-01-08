# Solution 1
This solution uses a hash map to store each element and the amount of times it has been encounted. First `⌊n / 2⌋` is calculated and stored in the `threshold` variable. Then the array is iterated through, creating map entries or incrementing existing ones until a map value surpasses `threshold`. Once this occurs, the corresponding key is returned as the majority element.

Time complexity: O(n) - the array is iterated over once.
Space complexity: O(n) - the hash map, at worst, will have n/2 entries.

# Solution 2
I thought of this solution but didn't implement it. This solution would involve first sorting the array. The middle element with index `n/2` would then be the majority element (true for even and odd sized arrays).

Time complexity: O(sorting complexity)
Space complexity: O(1) - no extra data structures are required.

# Solution 3
This solution uses a clever algorithm called Boyer-Moore Voting Algorithm. I did not think of this solution. At a high level, it uses a voting system whereby each element votes for itself, with the majority element obviously winning. The algorithm starts by guessing the first element is the majority. It then iterates over the array and keeps a sum, where it adds 1 if it encounters the guessed element `guess`, or subtracts 1 if it doesn't. When the `sum == 0`, we 'discard' the beginning of the array up to the current element. This works because we are ignoring an equal amount of majority and non-majority elements. The guessed element is then updated to the next encountered element. The algorithm will always eventually choose and hold the correct majority element and will finish iterating with the correct guess.