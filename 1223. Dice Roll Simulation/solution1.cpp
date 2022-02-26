#include "solution1.hpp"
#define DICE_FACES 6	// 6 columns for 6 dice faces
#define TOTAL 7			// 7th column contains total permutations

	// Build permutation vector
	
	// Record permutations
	// for each roll number 1 to n-1
		// for each dice land
			// for each rollMax
				// permutations += total - prev_dice
		// sum total
	// return mod final sum

int Solution::dieSimulator(int n, std::vector<int>& rollMax) {
	// Build permutation vector
	std::vector<std::vector<long>> perm(n + 1, std::vector<long>(TOTAL, 0));
	perm[0][TOTAL - 1] = 1;	// required to make algorithm work for rollMax > current roll
	std::fill(perm[1].begin(), perm[1].end() - 1, 1);
	perm[1][TOTAL - 1] = DICE_FACES;
	
	// Record permutations
	long mod{static_cast<long>(1e9 + 7)};
	for (auto roll{2}; roll <= n; ++roll) {	// for each roll
		for (auto dice{0}; dice < DICE_FACES; ++dice) {	// for each dice land
			for (auto prev_roll{roll - 1}; prev_roll >= 0 && prev_roll >= roll - rollMax[dice]; --prev_roll) {	// for each rollMax
				perm[roll][dice] += (perm[prev_roll][TOTAL - 1] - perm[prev_roll][dice] + mod) % mod;
			}
			perm[roll][TOTAL - 1] = (perm[roll][TOTAL - 1] + perm[roll][dice]) % mod;
		}
	}
	return perm[n][TOTAL - 1];
}