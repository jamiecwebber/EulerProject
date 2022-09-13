#pragma once

int compute005() {
	int i{ 20 };

	while (true) {
		bool found = true;
		for (int j = 2; j <= 20; j++) {
			if (i % j != 0) {
				found = false;
				break;
			}
		}
		if (found) return i;
		i++;
	}

}