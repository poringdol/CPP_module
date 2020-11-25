#include"myException.class.hpp"

myException::myException()
				: std::exception(), message("") {}

myException::myException(const char *mes)
				: std::exception(), message(mes) {}

myException::~myException() {}

const char* myException::what() const throw() {
	return message;
}
