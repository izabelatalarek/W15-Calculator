#pragma once
#include <string>
#include <functional>
#include <stdexcept>
#include <iostream>

class Operator
{
	std::string symbol;
	
public:
	Operator() = default;
	Operator(std::string symbolInput, std::function<double(double, double)> operation);

	std::function<double(double, double)> operation;
	
	Operator& operator=(const Operator& input);
	void operator()(std::string symbolInput, std::function<double(double, double)> operation);
};

