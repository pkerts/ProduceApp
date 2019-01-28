#include "ProduceContainer.h"
#include <iostream>


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
	Juice();
}

void ProduceContainer::Juice() {
	for (auto p : produce_) {
		for (auto n : p.nutrients_) {
			if (juice_nutrients_.count(n.first)) {
				juice_nutrients_.find(n.first)->second += n.second;
			}
			else {
				juice_nutrients_[n.first] = n.second;
			}
		}
	}
	std::cout << "\nJuice:" << std::endl;
	for (auto jn : juice_nutrients_) {
		std::cout << jn.first << ": " << jn.second << "%" << std::endl;
	}
}
