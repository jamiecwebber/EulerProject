#pragma once
#include <iostream>

int compute021() {
	int divisors[10001];
	for (int i = 1; i <= 10000; i++) {
		int sumOfDivisors{ 1 };
		for (int j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				sumOfDivisors += j;
			}
		}
		divisors[i] = sumOfDivisors;
	}

	int sumOfAmicables{ 0 };
	for (int i = 1; i <= 10000; i++) {
		if (divisors[i] <= 10000 && divisors[i] != i && divisors[divisors[i]] == i) sumOfAmicables += i;
	}

	return sumOfAmicables;
}