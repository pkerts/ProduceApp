#include "Produce.h"
#include <iostream>


Produce::~Produce()
{
}

void Produce::Print() {
	std::cout << name_ << std::endl;
}
