#include <vector>
#include <algorithm>

class Solution {
public:
    int largestMagicSquare(std::vector<std::vector<int>>& grid);
	bool isMagic(std::vector<std::vector<int>>& grid, int& sq_size, int& y, int& x);
};