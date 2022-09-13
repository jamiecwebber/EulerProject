#pragma once

int compute002() {
	int result{ 0 };
	int prev{ 1 };
	int next{ 1 };
	for (int i = 1; i <= 4000000;) {

		next = i + prev;
		if (i % 2 == 0) {
			result += i;
		}

		prev = i;
		i = next;
	}

	return result;
}