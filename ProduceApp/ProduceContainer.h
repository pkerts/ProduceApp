#pragma once
#include "Produce.h"
#include <vector>
#include <string>

class ProduceContainer
{
public:
	ProduceContainer();
	~ProduceContainer();

	void Add(Produce p);
private:
	std::vector<Produce> produce_;
};

