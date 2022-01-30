# Solution 1
My solution uses a modified binary search. We start by checking if the middle element `nums[mid]` against `target`. If it is equal, the function returns `mid`.

If `nums[mid] < target`, in a normal binary search the target would be to the right of `mid`. With rotated arrays, the target could have rotated to the left of `mid`. So we say that `target` is to the right of `mid` if:
- `nums[end] < nums[mid]` - the target must be to the right since, to the right, the array would increase until its maximum and then restart at its minimum and continue increasing until `nums[end]`
- `nums[end] >= target` - if the previous condition is not true then, to the right, the array only increases and does not restart. In that case, `target` is to the right if the last element is `>=` target, similar to normal binary search.

If neither condition is true, then `target` must be to the left of `mid`. The same logic applies in the opposite sense when `nums[mid] > target`.

Time complexity: O(log n) - the searchable area halves with every iteration of the loop as with normal binary search
Space complexity: O(1) - storage used is constant regardless of input vector size