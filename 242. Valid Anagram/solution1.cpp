#include "solution1.hpp"

bool Solution::isAnagram(std::string s, std::string t) {
	std::unordered_map<char, int> char_count;

	// Add counts for first string
	for (const auto& ch : s) {
		char_count.try_emplace(ch, 0);
		++char_count[ch];
	}

	// Subtract counts for second string
	for (const auto& ch : t) {
		char_count.try_emplace(ch, 0);
		--char_count[ch];
	}

	// Look for any non-zero values
	for (const auto& pair : char_count) {
		if (pair.second != 0) return false;
	}
	return true;
}