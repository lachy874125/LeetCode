#include "solution1.hpp"

bool Solution::isValid(std::string s) {
	if (s.length() % 2 != 0) return false;

	std::string opening_brackets{"([{"};
	std::string closing_brackets{")]}"};

	std::string bracket_stack;

	for (auto ch : s) {
		if (opening_brackets.find(ch) != std::string::npos) {	// if char is opening bracket, append to stack
			bracket_stack.push_back(ch);
		} else if (bracket_stack.empty()) {	 // if char is closing bracket and stack is empty, fail
			return false;
		} else if (closing_brackets.find(ch) == opening_brackets.find(bracket_stack.back())) {
			// if char is closing bracket and matches opening bracket at end of stack
			bracket_stack.pop_back();
		} else {  // brackets don't match
			return false;
		}
	}

	if (bracket_stack.empty()) return true;

	return false;  // unmatched opening brackets
};