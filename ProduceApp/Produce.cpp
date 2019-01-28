#include "Produce.h"
#include <iostream>


Produce::Produce(std::string name): name_(std::move(name)) {
	int status = 1;
	while (status) {
		std::cout << "Input name of nutrient" << std::endl;
		std::string nutrient_name;
		std::getline(std::cin, nutrient_name);
		if (nutrient_name == "done") {
			status = 0;
			break;
		}
		std::cout << "How much? (daily value)" << std::endl;
		double daily_value;
		std::cin >> daily_value;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		auto nutrient = std::make_pair(nutrient_name, daily_value);
		nutrients_.emplace_back(nutrient);
	}
}

Produce::~Produce()
{
}

void Produce::Print() {
	std::cout << name_ << std::endl;
	for (auto i : nutrients_) {
		std::cout << "    " << i.first << ": " << i.second << "%" << std::endl;
	}
}
