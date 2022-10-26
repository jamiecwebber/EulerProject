#pragma once
#include <iostream>

bool isAbundant(int n) {
	int sumOfDivisors{ 1 };
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) sumOfDivisors += i;
	}
	return sumOfDivisors > n;
}

int compute023() {
	bool abundant[28124]{};

	for (int i = 1; i < 28124; i++) {
		abundant[i] = isAbundant(i);
	}

	int total{ 0 };

	for (int i = 1; i < 28124; i++) {
		bool noSum{ true };
		for (int j = 1; j <= i / 2; j++) {
			if (abundant[j] && abundant[i - j]) {
				noSum = false;
				break;
			}
		}
		if (noSum) total += i;
	}

	return total;
}