#pragma once
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/integer.hpp>

int compute020() {
	using namespace boost::multiprecision;

	cpp_int factorial{ 1 };

	for (int i = 2; i <= 100; i++) {
		factorial *= i;
	}

	int count{ 0 };
	while (factorial > 0) {
		count += integer_modulus(factorial, 10);
		factorial /= 10;
	}

	return count;

}