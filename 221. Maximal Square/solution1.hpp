#include <vector>
#include <algorithm>

class Solution {
public:
    int maximalSquare(std::vector<std::vector<char>>& matrix);
	int squareEdge(std::vector<std::vector<char>>& matrix, std::size_t y, std::size_t x);
};