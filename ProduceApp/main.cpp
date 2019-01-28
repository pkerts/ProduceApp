#include "ProduceContainer.h"
#include "Produce.h"
#include <iostream>
#include <string>

int main() {

	ProduceContainer pc;

	int status = 1;
	while (status) {
		std::cout << "Enter the name of a produce" << std::endl;
		std::string produce_name;
		std::cin >> produce_name;
		if (produce_name == "done") {
			status = 0;
			break;
		}
		if (status == 0) {
			std::cout << "BREAK did not work as expected" << std::endl;
		}
		Produce p(produce_name);
		pc.Add(p);
	}

	pc.Print();

	return 0;
}