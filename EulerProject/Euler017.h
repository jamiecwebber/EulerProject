#pragma once

int compute017() {
	/// return total number of letters used when counting from one to one thousand


	int count{ 0 };


	// "one thousand" is used once
	count += 11;

	int sumOfDigits = 3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4; // one two three four five six seven eight nine

	// numbers "one" through "nine" are eached used in hundreds spot 100 times
	count += 100 * sumOfDigits;

	// "hundred" is used in every number from 100 to 999
	count += 900 * 7;

	// "and" is in every number from 101 to 999 except round hundreds
	count += 891 * 3;

	// numbers "one" to "ninety-nine" are each used 10 times
	int sumOfTens{ 0 };
		// within these the digits "one" to "nine" are used 9 times:
	sumOfTens += 9 * sumOfDigits;
		// and each of "twenty" through "ninety" are used 10 times:
	sumOfTens += 10 * (6 + 6 + 5 + 5 + 5 + 7 + 6 + 6); // twenty thirty forty fifty sixty seventy eighty ninety
		// and the teens are used once
	sumOfTens += 3 + 6 + 6 + 8 + 8 + 7 + 7 + 9 + 8 + 8; // ten eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen


	count += 10 * sumOfTens;

	return count;
}
