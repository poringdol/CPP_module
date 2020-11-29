template<typename T>
void _swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T& _min(const T& a, const T& b) {
	return a < b ? a : b;
}

template<typename T>
const T& _max(const T& a, const T& b){
	return a > b ? a : b;
}
