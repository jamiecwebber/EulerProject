#pragma once
#include <iostream>

int compute014() {
	int output{ 0 };
	int longestChain{ 0 };

	for (unsigned int i = 1; i < 1000000; i++) {
		unsigned long long n{ i };
		int count{ 1 };
		std::cout << i << std::endl;
		while (n != 1) {
			count++;
			if (n % 2 == 0) n = n / 2;
			else n = 3 * n + 1;
		}
		if (count > longestChain) {
			longestChain = count;
			output = i;
			std::cout << output << " " << count << std::endl;
		}
	}

	return output;
}