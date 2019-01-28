#pragma once
#include <string>
#include <utility>

class Produce
{
public:
	explicit Produce(std::string name) : name_(std::move(name)) {};
	~Produce();

	void Print();
	std::string get_name() const { return name_; }

	bool operator < (const Produce& str) const
	{
		return (name_ < str.name_);
	}
private:
	std::string name_;
};

