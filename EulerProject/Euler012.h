#pragma once
#include <iostream>

int compute012() {

	unsigned long long triangle{};
	int count{};
	for (int i = 1; true; i++) {
		triangle += i;


		// check divisors
		count = 2; // every number is divisble by 1 and itself
		// this can be optimized by limiting the loop to triangle / the smallest divisor
		for (int j = 2; j <= triangle / 2; j++) {
			if (triangle % j == 0) count++;
		}
		std::cout << triangle << " " << count << std::endl;
		if (count > 500) return triangle;
	}

	return 0;
}