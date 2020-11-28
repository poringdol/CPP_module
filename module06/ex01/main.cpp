#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "header.hpp"

#define SIZE (sizeof(int) + 16)

void* serialize(void) {
	void *res = new char[SIZE]();

	srand(time(0));
	std::string symbols("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890");
	int numOfSymb = static_cast<int>(symbols.size());

	for (size_t i = 0; i < 8; i++)
		reinterpret_cast<char *>(res)[i] = symbols[rand() % numOfSymb];

	for (size_t i = 12; i < SIZE; i++)
		reinterpret_cast<char *>(res)[i] = symbols[rand() % numOfSymb];

	reinterpret_cast<int *>(res)[2] = rand();
	return res;
}

Data* deserialize(void* raw) {
	Data *res = new Data;

	res->s1.assign(reinterpret_cast<char*>(raw), 8);
	res->s2.assign(reinterpret_cast<char*>(&((char *)raw)[12]), 8);
	res->n = (reinterpret_cast<int *>(raw))[2];
	return res;
}

int main() {
	void *res = serialize();
	Data *data = deserialize(res);

	std::cout << "String 1 = " << data->s1 << std::endl;
	std::cout << "String 2 = " << data->s2 << std::endl;
	std::cout << "Int = " << data->n << std::endl << std::endl;

	// проверяем содержимое через вывод на печать циклом
	for (size_t i = 0; i < 8; i++) {
		std::cout << (reinterpret_cast<char *>(res))[i];
	}
	std::cout << std::endl;

	for (size_t i = 12; i < SIZE; i++) {
		std::cout << (reinterpret_cast<char *>(res))[i];
	}

	std::cout << std::endl << (reinterpret_cast<int *>(res))[2] << std::endl;

	delete[] reinterpret_cast<char *>(res);
	delete data;
}