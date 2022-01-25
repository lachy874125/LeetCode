#include "solution2.hpp"

int Solution::maxProduct(std::vector<int>& nums) {
	auto min{nums[0]}, max{nums[0]}, res{nums[0]};
	
	// Keep track of min & max products and overall max
	for (auto i{1}; i != nums.size(); ++i) {
		std::initializer_list<int> list{nums[i], nums[i]*min, nums[i]*max};
		min = std::min(list);
		max = std::max(list);
		res = std::max({min,max,res});
	}

	return res;
}