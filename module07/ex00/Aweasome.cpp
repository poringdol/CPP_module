#include "Aweasome.hpp"

Awesome::Awesome( int n ) : _n(n) {}
Awesome::Awesome( Awesome const & rhs ) {*this = rhs;}
Awesome::~Awesome() {}

Awesome const & Awesome::operator=( Awesome const & rhs ) {_n = rhs.getN(); return *this;}
bool Awesome::operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
bool Awesome::operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
bool Awesome::operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
bool Awesome::operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
bool Awesome::operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
bool Awesome::operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
int  Awesome::getN() const { return _n; }

std::ostream& operator<<( std::ostream &os, Awesome const & rhs ) {os << rhs.getN(); return os; }
