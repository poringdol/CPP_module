template<typename T1, typename T2>
void iter(T1* arr, T2 size, void (*func)(T1&)) {
	for (int i = 0; i < static_cast<int>(size); i++) {
		func(arr[i]);
	}
}
