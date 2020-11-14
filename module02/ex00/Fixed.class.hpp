#ifndef FIXED_H
#define FIXED_H

class Fixed {
private:
	 int fixed_point_value;
	 static const int bits = 8;

public:	
	Fixed();
	Fixed(const Fixed &new_fixed);
	~Fixed();

	Fixed&	operator=(const Fixed &fixed);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
