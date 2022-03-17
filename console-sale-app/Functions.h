#pragma once
#include <string>
using std::string;

bool charIsNumber(char character) {
	int ASCII_0 = 48;
	int ASCII_9 = ASCII_0 + 9;
	return static_cast<int>(character) >= ASCII_0 && character <= ASCII_9;
}

int charToInt(char number) {
	int jumpNumber = 48;
	int transformedNumber;
	if (charIsNumber(number))
		transformedNumber = static_cast<int>(number) - jumpNumber;
	else
		transformedNumber = -1;
	return transformedNumber;
}
