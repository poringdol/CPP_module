#pragma once

#include <set>
#include <vector>
#include <list>

class Span {
private:
	std::set<unsigned> nums;
	std::vector<unsigned> spans;

public:
	Span();
	Span(unsigned);
	Span(const Span&);
	Span& operator=(const Span&);
	~Span();

	void addNumber(unsigned);
	void addSpan(std::set<unsigned> random);
	void findSpans();
	unsigned shortestSpan();
	unsigned longestSpan();
	unsigned minNum();
	unsigned maxNum();
};