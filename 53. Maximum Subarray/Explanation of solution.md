# Solution 1
I struggled with finding an O(N) solution for a long time so I decided to take the brute-force approach first. This simply involved checking the sum of every possible subarray and returning the largest one. The time complexity of this solution is O(N^2).

# Solution 2
Unfortunately, I couldn't figure out an O(N) solution by myself so I did some research and found an algorithm called Kadane's algorithm. This algorithm works by iterating through each element in the array and keeping a sum of the current subarray. As soon as the next element by itself is larger than the current subarray's sum, the current subarray is dropped and starts again at the current element. The `global_max` variable holds the largest computed subarray sum so far. Once the array has been fully iterated through, `global_max` holds the largest sum of all the subarrays. This solution has O(N) time complexity. I really like the cleverness and simplicity of this algorithm.
