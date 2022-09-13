#pragma once
#include <vector>
#include <numeric>
#include <iostream>

long long compute010 () {
	std::vector<int> primes{};
	long long output{};
	for (int i = 2; i < 2000000; i++) {
		bool prime = true;

		for (int j = 0; j < primes.size(); j++) {
			if (i % primes[j] == 0) {
				prime = false;
				break;
			}
		}
		if (prime) {
			std::cout << i << std::endl;
			output += i;
			primes.push_back(i);
		}
	}

	return output;
}