#include "Operator.h"

Operator::Operator(std::string symbol, std::function<double(double, double)> operation)
{
	this->symbol = symbol; 
	this->operation = operation;
}

Operator& Operator::operator=(const Operator& input)
{
	this->symbol = input.symbol;
	this->operation = input.operation;
	return *this;
}

void Operator::operator()(std::string symbolInput, std::function<double(double, double)> operation)
{
	this->operation = operation;
	this->symbol = symbolInput;
}




