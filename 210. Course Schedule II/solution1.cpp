#include "solution1.hpp"

std::vector<int> Solution::findOrder(int numCourses, std::vector<std::vector<int>>& prerequisites) {
	// Edge case
	if (numCourses == 1) return std::vector<int>{0};

	std::vector<int> res;
	std::vector<int> stack;

	// For each course
	for (int course{0}; course != numCourses; ++course) {
		// If course is already in res, skip
		if (std::find(res.begin(), res.end(), course) != res.end()) continue;

		stack.emplace_back(course);	 // course to search for
		auto p{0};					 // pair
		while (!stack.empty()) {
			while (p != prerequisites.size()) {
				// If 1st element = current search (stack.top())
				if (prerequisites[p][0] == stack.back()) {
					// If 2nd element is already in stack, return cycle
					if (std::find(stack.begin(), stack.end(), prerequisites[p][1]) != stack.end()) return std::vector<int>{};
					// If 2nd element is not in result
					if (std::find(res.begin(), res.end(), prerequisites[p][1]) == res.end()) {
						// Add 1st element to stack and restart search
						if (prerequisites[p][0] != stack.back()) stack.emplace_back(prerequisites[p][0]);
						stack.emplace_back(prerequisites[p][1]);
						prerequisites[p][0] = -1;
						p = -1;
					} else {
						prerequisites[p][0] = -1;
					}
				}
				++p;
			}
			// No more instances of s (search) so push to result
			res.emplace_back(stack.back());
			stack.pop_back();
			p = 0;
		}
	}
	return res;
}