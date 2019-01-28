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
