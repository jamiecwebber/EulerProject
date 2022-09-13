#pragma once
#include <cmath>
#include <iostream>

int compute009() {
	long result{};

	for (int i = 1; i <= 998; i++) {
		for (int j = 1; j < 1000 - i; j++) {
			if (std::pow(i, 2) + std::pow(j, 2) == std::pow(1000 - i - j, 2)) {
				std::cout << i << " " << j << " " << 1000 - i - j << std::endl;
				return i * j * (1000 - i - j);
			}
		}
	}

	return 0;
}