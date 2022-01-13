# Solution 1
The logic of this solution is that the zeros are 'pushed' sequentially towards the back of the vector. Imagining what it would look like is the first zero pushes back until it collects the next zero and then the third zero and so on. The group of zeros would continue getting larger until the entire group reaches the end.

It is implemented as follows. First we find the first zero and keep an index value `i1` there. Then we find the next non-zero value and store its index in `i2`. Then we swap the values and move each index forward by one. This means that within the block of zeros that is moving backward, instead of moving each zero backwards by one, only the front zero is swapped with the first non-zero value behind the block of zeros.

Time complexity: O(n) - the vector is iterated through once. Worst case scenario is a vector like {0,1,1,1,...} where there are n swaps as the single zero moves toward the back.
Space complexity: O(1) - there are a constant number of variables regardless of vector size.

# Solution 2
The logic of this solution is that non-zeros are pulled towards the front while a separate iterator `end_non_zeros` continually points to the last pulled-forward non-zero. Thus, pulled-forward elements retain their order. When this process finishes, `end_non_zeros` will point to the start of where all the zeros should go. We then use `std::fill` to fill the rest of the vector with zeros.

Time complexity: O(n) - the vector is iterated through once. Worst case scenario is a fully non-zero vector which will just be element-wise copied. However, this algorithm should be slightly faster than Solution 1, because the swap in Solution 1 requires an extra variable and two extra assignments.
Space complexity: O(1) - there are a constant number of variables regardless of vector size.

# Time comparison
I was interested in the performance of iterators versus indexes so I implemented both algorithms using both methods. I predicted that iterators would be faster but the opposite turned out to be true which I found very interesting. I also learnt that pre-incrementing `++x` is usually faster than post-incrementing `x++` because `x++` first creates a copy so that it can return the value `x` after it is incremented. `++x` just increments and returns a reference.