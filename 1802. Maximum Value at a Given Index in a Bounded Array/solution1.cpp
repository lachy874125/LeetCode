#include "solution1.hpp"

int Solution::maxValue(const int n, const int index, const int maxSum) {
	int lower_bound{(maxSum / n) - std::max(n - 1 - index, index) - 1};
	int max_val{lower_bound < 1 ? 1 : lower_bound};
	int prev_sum, sum{max_val * n};
	int left{index + 1}, right{index - 1};
	
	while (sum <= maxSum) {
		++max_val;
		--left;
		++right;
		prev_sum = sum;
		sum = prev_sum + (right - left + 1);
		if (left < 0) sum += left;
		if (right >= n) sum += n - 1 - right;
	}
	return max_val - 1;
}

/*
1 1 1 1 1 1, sum =  6, prev_sum =  0, left =  2, right = 0
1 2 1 1 1 1, sum =  7, prev_sum =  6, left =  1, right = 1, sum = prev_sum + (right - left + 1)
2 3 2 1 1 1, sum = 10, prev_sum =  7, left =  0, right = 2, sum = prev_sum + (right - left + 1)
3 4 3 2 1 1, sum = 14, prev_sum = 10, left = -1, right = 3, sum = prev_sum + (right - left + 1) + left
4 5 4 3 2 1, sum = 19, prev_sum = 14, left = -2, right = 4, sum = prev_sum + (right - left + 1) + left
5 6 5 4 3 2, sum = 25, prev_sum = 19, left = -3, right = 5, sum = prev_sum + (right - left + 1) + left
6 7 6 5 4 3, sum = 31, prev_sum = 25, left = -4, right = 6, sum = prev_sum + (right - left + 1) + left(if left is negative) + (n-1 - right)(if right >= n)
7 8 7 6 5 4, sum = 37
*/

/*
1 1 1 1
1 1 2 1
1 2 3 2
*/