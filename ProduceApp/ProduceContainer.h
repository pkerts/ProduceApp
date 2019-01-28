#pragma once
#include "Produce.h"
#include <vector>
#include <string>
#include <algorithm>

class ProduceContainer
{
private:
	std::vector<Produce> produce_;
public:
	ProduceContainer();
	~ProduceContainer();

	/*std::sort(produce_.begin(), values.end(), [](const Produce& lhs, const Produce& rhs) {
		return lhs.get_name() < rhs.get_name();
	});*/
	void Add(Produce p);
	void Print();

};

