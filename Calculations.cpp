#include "Calculations.h"

float additionResult;
float subtractionResult;
float multiplicationResult;
float divisionResult;

float Add(float x, float y) {
	additionResult = x + y;
	return additionResult;
}

float Subtract(float x, float y) {
	subtractionResult = x - y;
	return subtractionResult;
}

float Multiply(float x, float y) {
	multiplicationResult = x * y;
	return multiplicationResult;
}

float Divide(float x, float y) {
	divisionResult = x / y;
	return divisionResult;
}