#include <iostream>
#include "IMateriaSource.interface.hpp"
#include "AMateria.class.hpp"
#include "Character.class.hpp"
#include "Ice.class.hpp"
#include "Cure.class.hpp"
#include "MateriaSource.class.hpp"

using std::cout;
using std::endl;

void printType(AMateria* tmp) {
	if (tmp)
		cout << "Type of new materia is " << tmp->getType() << endl;
	else
		cout << "Materia creation failed " << endl;

}

int main() {
	// создаем 2 персонажа
	ICharacter* me = new Character("me");
	cout << "3 - Create character with name " << me->getName() << endl;
	ICharacter* bob = new Character("bob");
	cout << "4 - Create character with name " << bob->getName() << endl << endl;

	// создаем материю ice через указатель на базовый класс, а cure через указатель на дочерний класс
	AMateria *ice = new Ice();
	cout << "5 - Make pointer to base class" << endl;
	Cure *cure = new Cure();
	cout << "6 - Make pointer to child class" << endl << endl;

	// создаем MateriaSource через указатель на интерфейс
	IMateriaSource* src = new MateriaSource();
	AMateria* tmp;
	// пробуем создать материю из пустого MateriaSource
	cout << "7 - Try create materia from empty MateriaSource" << endl;
	tmp = src->createMateria("ice");
	cout << "7.1 - ";
	printType(tmp);
	cout << endl;

	// добавляем в MateriaSource указатели на ice и cure
	src->learnMateria(ice);
	src->learnMateria(cure);

	// создаем и удаляем копию объекта класса Ice через указатель на базовый класс
	cout << "8 - Create ice" << endl;
	tmp = src->createMateria("ice");
	cout << "8.1 - ";
	printType(tmp);
	delete tmp;
	cout << endl;

	// создаем и удаляем копию объекта класса Cure через указатель на базовый класс
	cout << "9 - Create cure" << endl;
	tmp = src->createMateria("cure");
	cout << "9.1 - ";
	printType(tmp);
	delete tmp;
	cout << endl;

	// пробуем создать материю неизвестного типа
	cout << "10 - Try create unknown materia type" << endl;
	tmp = src->createMateria("hz");
	cout << "10.1 - ";
	printType(tmp);
	cout << endl;

	// экипируем ice и cure
	me->equip(ice);
	me->equip(cure);

	cout << "11 - Use slot 0 with ice" << endl;
	cout << "12 - Ice XP before action = " << ice->getXP() << endl;
	me->use(0, *bob);
	cout << "13 - Ice XP after action = " << ice->getXP() << endl << endl;
	me->use(0, *bob);
	cout << "14 - Ice XP after action = " << ice->getXP() << endl << endl;
	me->use(0, *bob);
	cout << "15 - Ice XP after action = " << ice->getXP() << endl << endl;

	cout << "16 - Use slot 1 with cure" << endl;
	cout << "17 - Cure XP before action XP = " << cure->getXP() << endl;
	me->use(1, *bob);
	cout << "18 - Cure XP after action = " << cure->getXP() << endl << endl;

	// пробуем использовать пустой слот и слот, которого не существует
	cout << "19 - Use empty slot 2" << endl;
	me->use(2, *bob);
	cout << "20 - Try use undefined slot 5" << endl << endl;
	me->use(5, *bob);

	// разэкипируем ice и проверяем, что он не удалился
	me->unequip(0);
	cout << "21 - Ice XP after unequip action = " << ice->getXP() << endl << endl;
	me->equip(ice);

	// проверка копирования Character
	ICharacter* copy_me = me;
	copy_me->use(1, *bob);
	cout << "22 - Cure XP after copy_me action = " << cure->getXP() << endl << endl;

	// проверка присвоения Character
	ICharacter* assign_me(me);
	assign_me->use(1, *bob);
	cout << "23 - Cure after assign_me action XP = " << cure->getXP() << endl << endl;

	delete bob;
	delete me;
	delete src;
}
