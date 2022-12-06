#include "Day1.h"

int MaxCalories(const char* inputPath) {
	std::ifstream inStream(inputPath);

	if (!inStream) std::cerr << "Can't open input file!";

	std::string line;
	int maxCal = 0;
	int calCount = 0;

	while (std::getline(inStream, line)) {
		if (line.empty()) {
			//resets and compare with actual max
			if (maxCal < calCount) maxCal = calCount;
			calCount = 0;
		}
		else {
			int calories = std::stoi(line);
			calCount += calories;
		}
	}

	return maxCal;
}


int Max3Calories(const char* inputPath) {
	std::ifstream inStream(inputPath);

	if (!inStream) std::cerr << "Can't open input file!";

	std::string line;
	Podium podium = Podium(3);
	int calCount = 0;

	while (std::getline(inStream, line)) {
		if (line.empty()) {
			//resets and compare with actual max
			podium.insert(calCount);
			calCount = 0;
		}
		else {
			int calories = std::stoi(line);
			calCount += calories;
		}
	}

	return podium.sum();
}