#include "solution1.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
	for (auto idx1{0}; idx1 < nums.size() - 1; idx1++) {
		for (auto idx2{1}; idx2 < nums.size(); idx2++) {
			if (nums.at(idx1) + nums.at(idx2) == target) {
				return std::vector<int> {idx1, idx2};
			}
		}
	}
	return std::vector<int> {0,0};
}