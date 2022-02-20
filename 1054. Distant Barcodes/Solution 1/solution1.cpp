#include "solution1.hpp"

std::vector<int> Solution::rearrangeBarcodes(std::vector<int>& barcodes) {
	// Put all barcodes into hash map and keep count
	std::unordered_map<int, int> map;
	for (auto& barcode : barcodes) {
		map.try_emplace(barcode, 0);
		++map[barcode];
	}

	// Construct priority queue
	auto cmp{[](std::pair<int, int> left, std::pair<int, int> right) { return left.second < right.second; }};
	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, decltype(cmp)> pq(map.begin(), map.end(), cmp);

	// Build resultant vector
	std::vector<int> res;
	res.emplace_back(pq.top().first);

	// Subtract from barcode's count and re-sort priority queue
	if (pq.top().second == 1) {
		pq.pop();
	} else {
		auto temp{pq.top()};
		pq.pop();
		--temp.second;
		pq.emplace(temp);
	}

	while (!pq.empty()) {
		// Place 1st or 2nd most populous barcode
		if (res.back() != pq.top().first) {
			res.emplace_back(pq.top().first);  // place 1st

			// Subtract from barcode's count and re-sort priority queue
			if (pq.top().second == 1) {
				pq.pop();
			} else {
				auto temp{pq.top()};
				pq.pop();
				--temp.second;
				pq.emplace(temp);
			}
		} else {
			auto top{pq.top()};
			pq.pop();
			res.emplace_back(pq.top().first);  // place 2nd

			// Subtract from barcode's count and re-sort priority queue
			if (pq.top().second == 1) {
				pq.pop();
			} else {
				auto temp{pq.top()};
				pq.pop();
				--temp.second;
				pq.emplace(temp);
			}
			pq.emplace(top);
		}
	}
	return res;
}