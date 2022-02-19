#include "solution1.hpp"

int Solution::firstMissingPositive(std::vector<int>& nums) {
	// if (num is positive) store in hash table
	std::unordered_set<int> positives;
	for (auto& num : nums) {
		if (num > 0) positives.emplace(num);
	}

	// go through hash table and find first missing positive integer
	int num{1};
	while (true) {
		if (positives.find(num) == positives.end()) return num;
		++num;
	}
	return 0;
}