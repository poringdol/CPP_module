#include <iostream>
#include <cmath>
#include "Fixed.class.hpp"

Fixed::Fixed() : fixed_point_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int new_value) {
	std::cout << "Int constructor called" << std::endl;
	fixed_point_value = (new_value << bits);
}

Fixed::Fixed(const float new_value) {
	std::cout << "Float constructor called" << std::endl;
	fixed_point_value = roundf(new_value * (1 << bits));				//   'i << 8'  equal  'i * (1 << 8)'  equal 'i * pow(2, 8)'
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
	return (fixed_point_value);
}

void Fixed::setRawBits(int const raw) {
	fixed_point_value = raw;
}

int Fixed::toInt(void) const {
	return (fixed_point_value >> 8);
}

float Fixed::toFloat(void) const {
	return ((double)fixed_point_value / (1 << bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed) {
	stream << fixed.toFloat();
	return (stream);
}
