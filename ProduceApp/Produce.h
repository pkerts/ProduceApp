#pragma once
#include <string>
#include <utility>
#include <vector>

class Produce
{
public:
	explicit Produce(std::string name);
	~Produce();

	void Print();
	std::string get_name() const { return name_; }

	bool operator < (const Produce& str) const
	{
		return (name_ < str.name_);
	}

	std::vector<std::pair<std::string, double>> nutrients_;
private:
	std::string name_;
};

