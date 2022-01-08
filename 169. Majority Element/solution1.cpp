#include "solution1.hpp"

int Solution::majorityElement(std::vector<int>& nums) {
	size_t threshold{nums.size() >> 1};
	std::unordered_map<int, unsigned int> map{};

	for (auto num : nums) {
		if (map.count(num)) {
			map[num]++;
			if (map[num] > threshold) return num;
		} else {
			map.emplace(std::pair<int, size_t>{num, 1});
		}
	}
	return nums[0];
}