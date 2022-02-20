#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

// Tests to see if there are any adjacent equal barcodes
class TestSolution {
public:
	bool noAdjacentsEqual(std::vector<int> vec) {
		for (auto i{vec.begin()}; i != vec.end() - 1; ++i) {
			if (*i == *(i + 1)) return false;
		}
		return true;
	}
};

TEST_CASE("Test Solution") {
	Solution solution;
	TestSolution test_solution;
	std::vector<int> input;

	input = {1, 1, 1, 2, 2, 2};
	REQUIRE(test_solution.noAdjacentsEqual(solution.rearrangeBarcodes(input)) == true);
}