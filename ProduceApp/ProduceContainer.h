#pragma once
#include "Produce.h"
#include <vector>
#include <string>
#include <algorithm>
#include <map>

class ProduceContainer
{
public:
	ProduceContainer();
	~ProduceContainer();

	void Add(Produce p);
	void Print();

	void Juice();
private:
	std::vector<Produce> produce_;
	std::map<std::string, double> juice_nutrients_;
};

