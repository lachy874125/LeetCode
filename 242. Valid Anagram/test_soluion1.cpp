#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "solution1.hpp"

TEST_CASE("Test Solution") {
	Solution solution;
	std::string s1, s2;

	s1 = "anagram";
	s2 = "nagaram";
	REQUIRE(solution.isAnagram(s1, s2) == true);

	s1 = "rat";
	s2 = "car";
	REQUIRE(solution.isAnagram(s1, s2) == false);

	s1 = "aa";
	s2 = "bb";
	REQUIRE(solution.isAnagram(s1, s2) == false);
}