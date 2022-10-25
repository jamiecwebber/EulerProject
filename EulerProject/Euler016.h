#pragma once
#include <math.h>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/integer.hpp>


int compute016() {
	using namespace boost::multiprecision;

	const cpp_int root{ 2 };
	cpp_int power{ boost::multiprecision::pow(root, 1000) };

	int output = {};

	while (power > 0) {
		output += integer_modulus(power, 10);
		power /= 10;
	}

	return output;
}