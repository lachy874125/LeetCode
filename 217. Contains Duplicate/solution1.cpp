#include "solution1.hpp"

bool Solution::containsDuplicate(std::vector<int>& nums) {
	std::unordered_set<int> set;
	for (auto num : nums) {
		if (set.find(num) == set.end()) {
			set.emplace(num);
		} else {
			return true;
		}
	}
	return false;
}