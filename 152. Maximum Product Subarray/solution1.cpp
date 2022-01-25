#include "solution1.hpp"

int Solution::maxProduct(std::vector<int>& nums) {
	auto left{1}, right{1};
	auto res{nums[0]};

	for (auto i{0}; i != nums.size(); ++i) {
		// If zero was previously encountered, reset product to 1
		if (left == 0) left = 1;
		if (right == 0) right = 1;

		// Keep track of left and right products
		left *= nums[i];
		right *= nums[nums.size() - 1 -i];

		// Update maximum
		res = std::max({left,right,res});
	}

	return res;
}