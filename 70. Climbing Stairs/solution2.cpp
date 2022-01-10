#include "solution1.hpp"

int Solution::climbStairs(int n) {
	if (n == 1) return 1;

	int i{1}, prev2{1}, prev1{1};
	while (i < n) {
		prev1 = prev2 + prev1;
		prev2 = prev1 - prev2;
		i++;
	}
	return prev1;
}