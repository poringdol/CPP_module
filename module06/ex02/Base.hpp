#pragma once

#include <string>

class Base {
public:
	std::string name;

	Base() : name("Base") {}
	Base(const std::string& new_name) : name(new_name) {}
	virtual ~Base() {}
};
