#pragma once
#include <vector>
#include <iostream>

int compute007() {
	std::vector<long> primes{2};
	for (int i = 0; i < 10000; i++) {
		for (int j = primes[i] + 1; true; j++) {
			bool newPrime = true;
			for (int k = 0; k < primes.size(); k++) {
				if (j % primes[k] == 0) {
					newPrime = false;
					break;
				}
			}
			if (newPrime) {
				std::cout << primes.size() << " " << j << std::endl;
				primes.push_back(j);
				break;
			}
		}
	}
	return primes[10000];
}