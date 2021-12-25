#include "solution2.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
	std::fill(std::begin(hash_table), std::end(hash_table), nullptr);

	for (int i{}; i < nums.size(); i++) {
		// Search hash table for (target - num)
		auto diff_idx = SearchHash(target - nums.at(i));
		if (diff_idx != -1) return std::vector<int>{std::min(i, diff_idx), std::max(i, diff_idx)};

		// Create hash table entry for current num
		CreateHashEntry(nums.at(i), i);
	}

	// Failed if reached here
	return std::vector<int>{0, 0};
}

int Solution::Hash(const int& x) {
	return abs(x) % HASH_SIZE;
}

int Solution::SearchHash(const int& target) {
	auto target_idx{Hash(target)};
	if (hash_table[target_idx]) {
		auto curr_node{hash_table[target_idx]};

		// Check first node
		if (curr_node->val == target) {
			return curr_node->idx;
		}

		// Check next nodes
		while (curr_node->next) {
			curr_node = curr_node->next;
			if (curr_node->val == target) {
				return curr_node->idx;
			}
		}
	}

	// Target not found
	return -1;
}

void Solution::CreateHashEntry(const int& num, const int& i) {
	auto idx{Hash(num)};
	if (hash_table[idx]) {
		auto curr_node{hash_table[idx]};
		if (curr_node->val == num) return;
		bool found_entry{false};
		while (curr_node->next && !found_entry) {
			curr_node = curr_node->next;
			if (curr_node->val == num) found_entry = true;
		}
		if (!found_entry) curr_node->next = new Node(num, i);
	} else {
		hash_table[idx] = new Node(num, i);
	}
}