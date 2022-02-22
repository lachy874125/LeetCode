# Solution 1
The algorithm works by building up a 'triangle' with its peak at the specified index. For example if we call `maxValue` with `n = 6`, `index = 1`, and `maxSum = 27`, the algorithm will build up the triangle as follows:

`1 1 1 1 1 1`, sum = 6
`1 2 1 1 1 1`, sum = 7
`2 3 2 1 1 1`, sum = 10
`3 4 3 2 1 1`, sum = 14
`4 5 4 3 2 1`, sum = 19
`5 6 5 4 3 2`, sum = 25
`6 7 6 5 4 3`, sum = 31

We don't have to build a real array; instead a simple formula can be used that keeps a track of the sum and simply adds the sum of the next layer of the triangle until `maxSum` is surpassed, at which point `max_val` at position `index` is returned. The algorithm takes into account the parts of the 'triangle' that extend beyond the boundary of the imaginary array.

An  optimisation can be made where instead of starting the array with all `1`'s, we can start at a lower bound. If all values were equal at `max_val = maxSum / n`, that would produce a sum that is less than or equal to `maxSum`. But a 'triangle' built up from from there might exceed `maxSum` before reaching a peak. However, if all values were equal at `max_val = maxSum / n` minus the largest distance from `index` to the array edges, a triangle built up from there would peak at `maxSum / n` which is guaranteed to have a sum less than `maxSum`. This is because a triangle peaking at `maxSum / n` will always be less than the sum of all values equal to `maxSum / n`. So that is where we set the lower bound to start from. For a call such as `maxSum(10, 1, 5000000)` instead of starting at `1` the algorithm can start at `499996`.

Time complexity: ??
Space complexity: O(1)