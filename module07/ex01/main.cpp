#include <iostream>
#include "iter.hpp"

// using std::cout;
// using std::endl;
// using std::string;

// template<typename T>
// void print(T i) {
// 	std::cout << i << " ";
// }

// template<typename T>
// void increment(T& i) {
// 	i++;
// }

// int main() {

// 	int intArr[10] = {1,2,3,4,5,6,7,8,9,0};
// 	iter(intArr, 10, print);
// 	cout << endl;
// 	iter(intArr, 10, increment);
// 	iter(intArr, 10, print);
// 	cout << endl << endl;

// 	char charArr[] = "ABCDEFGHIJKLMNO";
// 	iter(charArr, 15, print);
// 	cout << endl;
// 	iter(charArr, 15, increment);
// 	iter(charArr, 15, print);
// 	cout << endl << endl;

// 	string strArr[10] = {"123","456","stroka","blabla","uhodi","6","7","8","9","0"};
// 	iter(strArr, 10, print);
// 	cout << endl;
// }

class Awesome {

public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }

private:
int _n;};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {

int tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
Awesome tab2[5];

iter( tab, 5, print );
iter( tab2, 5, print );

return 0;
}