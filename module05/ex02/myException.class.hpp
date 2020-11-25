#pragma once

#include <exception>

class		myException : public std::exception {
protected:
	const char* message;

public:
	myException();
	myException(const char *mes);
	myException(const myException&) = default;
	virtual ~myException();

	myException& operator=(myException&&) = default;

	const char* what() const throw() override;
};
