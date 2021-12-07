#include "solution1.hpp"

int Solution::singleNumber(std::vector<int>& nums) {
	int result{};
	for (auto& num : nums) {
		result ^= num;
	}
	return result;
}