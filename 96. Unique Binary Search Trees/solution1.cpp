#include "solution1.hpp"

int Solution::numTrees(int N) {
	std::vector<int> res{1,1};

	for (auto n{2}; n <= N; ++n) {
		res.emplace_back(0);
		for (auto i{0}; i < n; ++i) {
			res[n] += res[i]*res[n-1-i];
		}
	}

	return res[N];
}