#include "OperatorManager.h"

OperatorManager::OperatorManager()

{
	plus ("+", [](double a, double b) { return a + b; });
	minus ("-", [](double a, double b) { return a - b; });
	
	multiplication.operation = [](double a, double b) { return a * b; };
	division.operation = [](double a, double b) { if (b != 0) return a / b; else throw std::logic_error("Pamietaj cholero nie dziel przez 0"); };
}