#include "solution2.hpp"

int Solution::maxProfit(std::vector<int>& prices) {
	if (prices.size() == 1) return 0;

	int profit{0};
	size_t i1{0}, i2{1};
	while (i2 < prices.size()) {
		if (profit < prices[i2] - prices[i1]) {
			profit = prices[i2] - prices[i1];
		} else if (prices[i2] < prices[i1]) {
			i1 = i2;
		}
		i2++;
	}
	return profit;
}