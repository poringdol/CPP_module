#pragma once

#include <string>

class Cast {
private:
	std::string literal;

	Cast();

public:
	Cast(const std::string& literal);
	Cast(const Cast&);
	Cast& operator=(const Cast&);
	~Cast();

	void	convert(char&);
	void	convert(int&);
	void	convert(float&);
	void	convert(double&);
};