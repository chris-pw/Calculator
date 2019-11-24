#include "Calculations.h"
#include "Log.h"
#include <iostream>

float inputX;
float inputY;



float choose() {
	std::cout << "Choose a number:" << std::endl;
	std::cin >> inputX;
	std::cout << "Choose another number:" << std::endl;
	std::cin >> inputY;
	return inputX, inputY;
}

int main() {

	int method;
	choose();
	std::cout << "Would you like to 1) Multiply, 2) Divide, 3) Add or 4) Subtract?" << std::endl;
	std::cin >> method;
	switch (method)
	{
	case 1:
		LogResults(Multiply(inputX, inputY));
		break;
	case 2:
		LogResults(Divide(inputX, inputY));
		break;
	case 3:
		LogResults(Add(inputX, inputY));
		break;
	case 4:
		LogResults(Subtract(inputX, inputY));
		break;
	}
	return 0;
}