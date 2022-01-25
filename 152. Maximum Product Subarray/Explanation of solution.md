# Solution 1
When there are zero or an even number of negative numbers and no zeros, the largest product is the product of the entire vector. When there are no zeros and an odd number of negative vectors, the largest product is either the product from the left until just before the rightmost negative element or it is the product from the right until just before the leftmost negative element. When there are zeros, we can imagine the zeros being separators between subvectors, with the same logic above being applicable to the subvectors.

Thus, this solution takes the maximum product tracking from the left and separately from the right and returns the largest. When either product becomes zero (due to previously encountering a zero) it is restarted at 1, ready for the next subvector it encounters.

Time complexity: O(n) - the vector is iterated once, from the left and right
Space complexity: O(1)

# Solution 2
I found this solution through research and implemented it myself. This clever algorithm iterates the vector only forwards and tracks both the minimum possible product and the maximum possible product. The logic is that due to multiplication by negatives, the minimum can often be multiplied by a negative number to become the next maximum product.

Time complexity: O(n) - the vector is iterated once
Space complexity: O(1)