#pragma once
#include <vector>

unsigned long long compute015 () {
	// insights 
	// - each route has a mirror image along the diagonal, so only need to calculate half of them
	// - the number of paths to each point is the sum of the number of paths to the points above and to the left
	// n is grid size plus 1!
	const int n = 21;
	std::vector<std::vector<unsigned long long>> grid(n, std::vector<unsigned long long>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 && j == 0) grid[i][j] = 0;
			else if (i == 0 || j == 0) grid[i][j] = 1;
			else grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
		}
	}

	return grid[n-1][n-1];
}