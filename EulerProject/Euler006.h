#pragma once
#include <math.h>

int compute006() {
	long long sumOfSquares{0};
	long long sum{0};
	for (int i = 1; i <= 100; i++) {
		sum += i;
		sumOfSquares += pow(i, 2);
	}
	return pow(sum, 2) - sumOfSquares;
}