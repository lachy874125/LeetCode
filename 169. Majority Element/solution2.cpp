#include "solution2.hpp"

int Solution::majorityElement(std::vector<int>& nums) {
	int sum{};
	int guess;
	for (auto num : nums) {
		if (sum == 0) {
			guess = num;
		}
		num == guess ? sum++ : sum--;
	}
	return guess;
}