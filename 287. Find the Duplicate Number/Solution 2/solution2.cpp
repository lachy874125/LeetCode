#include "solution2.hpp"

// Finds the first duplicate in a vector of ints
int Solution::findDuplicate(const std::vector<int>& nums) {
	// Run slow and fast pointers until they meet
	int slow{nums[0]}, fast{nums[0]};
	do {
		slow = nums[slow];
		fast = nums[nums[fast]];
	} while (slow != fast);

	// Move one pointer back to beginning and run them both slow
	// They will meet at the duplicate number
	slow = nums[0];
	while (slow != fast) {
		slow = nums[slow];
		fast = nums[fast];
	}
	return slow;
}