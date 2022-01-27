# Solution 1
Assume we have the answers for `n=1` and `n=2` as being `1` and `2` respectively. For `n=3`, we have the following integers `[1,2,3]`  which will populate the BST.

If `1` is the root node, we have `[2,3]` that are left to go on the right side of the root. The number of possible ways of doing this is the same as the answer for `n=2`. Another way of looking at this is the number of ways of arranging `[2,3]` is the same as the number of ways of arranging `[1,2]`. Therefore the total ways of arranging is `n=0 x n=2`

If `2` is the root node, we have `[1]` that can only go on the left side and `[3]` that can only go on the right side. Therefore the total ways of arranging is `n=1 x n=1`.

If `3` is the root node, the total ways of arranging is `n=2 x n=0` because there is a subtree of size 2 on the left and a subtree of size 0 on the right.

So for any `n`, we cycle through each possible root node, and find the possible left arrangement x possible right arrangement. This is achieved by building up the solution from `n=1` and using the stored results.