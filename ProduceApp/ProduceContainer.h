#pragma once
#include "Produce.h"
#include <vector>
#include <string>
#include <algorithm>

class ProduceContainer
{
public:
	ProduceContainer();
	~ProduceContainer();

	void Add(Produce p);
	void Print();
private:
	std::vector<Produce> produce_;
};

