#include <iostream>
#include "Fixed.class.hpp"

Fixed::Fixed() : fixed_point_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &new_fixed) {
	std::cout << "Copy constructor called" << std::endl;
	fixed_point_value = new_fixed.fixed_point_value;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_value = fixed.fixed_point_value;
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point_value = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
