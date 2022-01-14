# Solution 1
The most obvious solution is to implement a binary search, since the vector is sorted. A binary search continually checks the middle of the current array and discards the upper or lower part of the array depending on if the middle value is greater or less than the target respectively.

My algorithm continually shrinks the searchable section of the vector until `start` is greater than `end`. At this point the target is either found or this is where it would be inserted.

Time complexity: O(log n) - the vector size is continually halved
Space complexity: O(1) - only three variables are used regardless of vector size