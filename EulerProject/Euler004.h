#pragma once
#include <string>

int compute004() {
	int result{1};

	for (int i = 999; i >=100; i--) {
		for (int j = i; j >=100; j--) {
			if (i * j > result) {
				bool palendrome = true;
				std::string str = std::to_string(i * j);
				for (int k = 0; k < str.size() / 2; k++) {
					if (str[k] != str[str.size() - k - 1]) palendrome = false;
				}
				if (palendrome) result = i * j;
			}
		}
	}

	return result;
}