#include <stdexcept>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "span.hpp"

Span::Span() {}
Span::Span(unsigned value) {nums.insert(value);}
Span::Span(const Span& toCopy) {*this = toCopy;}
Span& Span::operator=(const Span& toCopy) {
	nums = toCopy.nums;
	return *this;
}
Span::~Span() {}

void Span::addNumber(unsigned newN) {
	if(nums.count(newN)) {
		throw std::out_of_range("Num is already in set");
	}
	nums.insert(newN);
	findSpans();
}

void Span::addSpan(std::set<unsigned> random) {
	nums.insert(random.begin(), random.end());
	findSpans();
}

void Span::findSpans() {
	spans.resize(nums.size() - 1);	
	std::adjacent_difference(nums.begin(), nums.end(), spans.begin());
}

unsigned Span::shortestSpan() {
	if (spans.size() <= 1)
		throw std::out_of_range("Empty span");
	return *(std::min(spans.begin(), spans.end()));
}

unsigned Span::longestSpan() {
	if (spans.size() <= 1)
		throw std::out_of_range("Empty span");
	return *(nums.rbegin()) - *(nums.begin());
}

unsigned Span::minNum() {
	return *(nums.begin());
}

unsigned Span::maxNum() {
	return *(nums.rbegin());
}