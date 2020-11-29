#pragma once

#include <iostream>

class Awesome {

public:

Awesome( int n );
Awesome( Awesome const & rhs );
~Awesome();

Awesome const & operator=( Awesome const & rhs );
bool operator==( Awesome const & rhs ) const;
bool operator!=( Awesome const & rhs ) const;
bool operator>( Awesome const & rhs ) const;
bool operator<( Awesome const & rhs ) const;
bool operator>=( Awesome const & rhs ) const;
bool operator<=( Awesome const & rhs ) const;

int  getN() const;

private:

int _n;
};

std::ostream& operator<<( std::ostream &os, Awesome const & rhs );
