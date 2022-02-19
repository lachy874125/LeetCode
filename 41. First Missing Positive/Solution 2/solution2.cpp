#include "solution2.hpp"

int Solution::firstMissingPositive(std::vector<int>& nums) {
	// Move each number to its correct position (hash map) within the input vector
	for (std::size_t i{0}; i != nums.size(); ++i) {
		auto correct_idx{nums[i] % nums.size()};	// correct position of nums[i]
		if (nums[i] > 0 && correct_idx != i) {	// if positive and not in the correct position
			auto next_to_move{nums[i]};
			nums[i] = 0;
			while (next_to_move > 0) {
				if (nums[correct_idx] > 0) {	// if correct position of next_to_move is positive	
					if (nums[correct_idx] % nums.size() != correct_idx) {	// if correct position of next_to_move is not in the correct position
						std::swap(nums[correct_idx], next_to_move);
						correct_idx = next_to_move % nums.size();
					} else if (next_to_move < nums[correct_idx]) {	// otherwise if next_to_move is less than the number at its correct position
						nums[correct_idx] = next_to_move;
						next_to_move = 0;
					} else {
						next_to_move = 0;
					}
				} else {
					nums[correct_idx] = next_to_move;
					next_to_move = 0;
				}
			}	
		}	
	}

	// Iterate through and find lowest missing positive
	auto min_pos{1};
	for (auto& num : nums) {
		if (num == min_pos) ++min_pos;
	}
	if (nums[0] == min_pos) ++min_pos;


	return min_pos;
}