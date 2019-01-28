#include "ProduceContainer.h"


ProduceContainer::ProduceContainer()
{
}


ProduceContainer::~ProduceContainer()
{
}

void ProduceContainer::Add(Produce p) {
	produce_.emplace_back(p);
}

void ProduceContainer::Print() {
	std::sort(produce_.begin(), produce_.end());
	for (auto i : produce_) {
		i.Print();
	}
}
