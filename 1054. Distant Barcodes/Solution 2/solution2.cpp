#include "solution2.hpp"

std::vector<int> Solution::rearrangeBarcodes(std::vector<int>& barcodes) {
	// Build hash map
	std::unordered_map<int, int> barcode_freq;
	for (auto& barcode : barcodes) {
		barcode_freq.try_emplace(barcode, 0);
		++barcode_freq[barcode];
	}

	// Determine most frequent barcode
	auto most_frequent_barcode{barcode_freq.begin()};
	for (auto barcode{barcode_freq.begin()}; barcode != barcode_freq.end(); ++barcode) {
		if (barcode->second > most_frequent_barcode->second) most_frequent_barcode = barcode;
	}

	// Place most frequent barcode
	auto it{barcodes.begin()};
	while (most_frequent_barcode->second != 0) {
		*it = most_frequent_barcode->first;
		--most_frequent_barcode->second;
		it += 2;
	}
	barcode_freq.erase(most_frequent_barcode->first);

	// Place remaining barcodes
	for (auto barcode{barcode_freq.begin()}; barcode != barcode_freq.end(); ++barcode) {
		while (barcode->second != 0) {
			if (it >= barcodes.end()) it = barcodes.begin() + 1;
			*it = barcode->first;
			--barcode->second;
			it += 2;
		}
	}

	return barcodes;
}