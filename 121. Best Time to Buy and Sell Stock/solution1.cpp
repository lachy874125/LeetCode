#include "solution1.hpp"

int Solution::maxProfit(std::vector<int>& prices) {
	int profit{};
	for (auto i{prices.begin()}; i != prices.end(); i++) {
		for (auto j{i + 1}; j != prices.end(); j++) {
			if (profit < *j - *i) profit = *j - *i;
		}
	}
	return profit;
}