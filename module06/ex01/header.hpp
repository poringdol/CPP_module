#pragma once
#include <string>w

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void* serialize(void);
Data* deserialize(void * raw);
