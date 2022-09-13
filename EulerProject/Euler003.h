#pragma once
#include <vector>
#include <iostream>

int compute003() {
	long long checkNumber{ 600851475143 };
	long long result {1};
	std::vector<long long> primes{2};
	for (long long i = 3; i < checkNumber / 2; i++) {
		bool isPrime = true;
		for (int j = 0; j < primes.size(); j++) {
			if (i % primes[j] == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			primes.push_back(i);
			if (checkNumber % i == 0 && i > result) {
				result = i;
				std::cout << result << std::endl;
			}			
		}
	}
	return result;
}
