#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int compute022() {
	std::ifstream input ("p022_names.txt");

	std::vector<std::string> names{};
	std::string name{};
	
	while (input.good()) {
		std::getline(input, name, ',');
		name.erase(std::remove(name.begin(), name.end(), '"'), name.end());
		names.push_back(name);
	}

	std::sort(names.begin(), names.end());

	int total{ 0 };
	for (int i = 0; i < names.size(); i++) {
		int nameScore{ 0 };
		for (int j = 0; j < names[i].size(); j++) {
			nameScore += names[i][j] - 'A' + 1;
		}
		nameScore *= (i + 1);
		total += nameScore;
	}

	return total;
}