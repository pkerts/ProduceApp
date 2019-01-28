#pragma once
#include <string>

class Produce
{
public:
	Produce();
	~Produce();

	std::string get_name() const { return name_; }
private:
	std::string name_;
};

