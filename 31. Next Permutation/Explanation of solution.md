# Solution 1
I spent 1.5 hours on this one and only figured out the pattern after doing many examples by hand. The pattern is to start from the rightmost pair using two pointers `i1` and `i2 = i1 + 1` and move both pointers toward the front until we find a pair for which `i1 < i2`. If the whole vector is in descending order then there is no greater permutation and we simply reverse the vector to get the smallest permutation.

Once we find a pair such that `i1 < i2`, we swap the value of `i1` with the next biggest integer to the right of `i1`. This can be found by restarting `i2` at the end and moving inwards until `i1 < i2` at which point we swap the numbers. Then everything to the right of `i1` should be in descending order so we need to reverse everything to the right of `i1` so it is finally in ascending order.

Time complexity: O(n) - at worst we iterate the vector three times; once to find the first pair where `i1 < i2`, next to find the next biggest number to the right of `i1`, and then to reverse everything to the right of `i1`
Space complexity: O(1) - only constant extra space is used