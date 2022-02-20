# Solution 1
 The algorithm starts by building a hash map containing barcodes and each barcode's frequency. Then a priority queue is constructed from the hash map. A custom comparison function is used to order the barcodes in descending order of frequency. The resultant vector is then iteratively filled by placing either the 1st or 2nd most frequent element at a time. The priority queue automatically keeps the barcodes in order after each one is placed in the resultant vector.

 # Solution 2
 The algorithm builds a hash map as in Solution 1. It then determines the most frequent barcode and places it in positions 0, 2, 4, ... until depleted. There will be at most (N+1)/2 of the most frequent barcode. Afterwards, it does not matter which barcode is chosen as long as we only start placing the next barcode after the previous is fully depleted (i.e. place all of barcode `x` before starting to place barcode `y`). We continue placing barcodes in all the even positions and then all the odd positions.

 - Time complexity: O(n) where n = size of `barcodes`
	 - All barcodes are iterated over to create the hash map
	 - All barcodes are rearranged
 - Space complexity: O(N) where N = number of unique barcodes
	 - The hash map will contain N pairs