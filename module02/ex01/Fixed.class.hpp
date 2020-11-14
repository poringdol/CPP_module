#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:
	 int fixed_point_value;
	 static const int bits = 8;

public:	
	Fixed();
	Fixed(const int new_value);
	Fixed(const float new_value);
	Fixed(const Fixed &new_fixed);
	~Fixed();

	Fixed&	operator=(const Fixed &fixed);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream& operator<<(std::ostream &stream, const Fixed &fixed);

#endif
