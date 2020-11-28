#pragma once

#include <string>

class StaticCast {
private:
	const char*	literal;
	char*		endptr;
	double		stringToDouble;
	bool		error;
	bool		isNanInf;

	StaticCast();
	StaticCast(const StaticCast&);
	StaticCast& operator=(const StaticCast&);

public:
	StaticCast(const char* literal);
	~StaticCast();

	void	convert(char&);
	void	convert(int&);
	void	convert(float&);
	void	convert(double&);
};