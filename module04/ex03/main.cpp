#include <iostream>
#include "IMateriaSource.interface.hpp"
#include "AMateria.class.hpp"
#include "Character.class.hpp"
#include "Ice.class.hpp"
#include "Cure.class.hpp"
#include "MateriaSource.class.hpp"

void printType(AMateria* tmp) {
	if (tmp)
		std::cout << "Type of new materia is " << tmp->getType() << std::endl;
	else
		std::cout << "Materia creation failed " << std::endl;

}

int main() {
	// создаем 2 персонажа
	ICharacter* me = new Character("me");
	std::cout << "Create character with name " << me->getName() << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << "Create character with name " << bob->getName() << std::endl << std::endl;

	// создаем материю ice через указатель на базовый класс, а cure через указатель на дочерний класс
	AMateria *ice = new Ice();
	std::cout << "Make pointer to base class" << std::endl;
	Cure *cure = new Cure();
	std::cout << "Make pointer to child class" << std::endl << std::endl;

	// создаем MateriaSource через указатель на интерфейс
	IMateriaSource* src = new MateriaSource();
	AMateria* tmp;
	// пробуем создать материю из пустого MateriaSource
	std::cout << "Try create materia from empty MateriaSource" << std::endl;
	tmp = src->createMateria("ice");
	printType(tmp);

	// добавляем в MateriaSource указатели на ice и cure
	src->learnMateria(ice);
	src->learnMateria(cure);

	// создаем и удаляем копию объекта класса Ice через указатель на базовый класс
	std::cout << "Create ice" << std::endl;
	tmp = src->createMateria("ice");
	printType(tmp);
	delete tmp;

	// создаем и удаляем копию объекта класса Cure через указатель на базовый класс
	std::cout << "Create cure" << std::endl;
	tmp = src->createMateria("cure");
	printType(tmp);
	delete tmp;

	// пробуем создать материю неизвестного типа
	std::cout << "Try create unknown materia type" << std::endl;
	tmp = src->createMateria("hz");
	printType(tmp);

	// экипируем ice и cure
	me->equip(ice);
	me->equip(cure);

	std::cout << std::endl << "Use slot 0 with ice" << std::endl;
	std::cout << "Ice XP before action = " << ice->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "Ice XP after action = " << ice->getXP() << std::endl << std::endl;
	me->use(0, *bob);
	std::cout << "Ice XP after action = " << ice->getXP() << std::endl << std::endl;
	me->use(0, *bob);
	std::cout << "Ice XP after action = " << ice->getXP() << std::endl << std::endl;

	std::cout << "Use slot 1 with cure" << std::endl;
	std::cout << "Cure XP before action XP = " << cure->getXP() << std::endl;
	me->use(1, *bob);
	std::cout << "Cure XP after action = " << cure->getXP() << std::endl << std::endl;

	// пробуем использовать пустой слот и слот, которого не существует
	std::cout << "Use empty slot 2" << std::endl;
	me->use(2, *bob);
	std::cout << "Try use undefined slot 5" << std::endl << std::endl;
	me->use(5, *bob);

	// разэкипируем ice и проверяем, что он не удалился
	me->unequip(0);
	std::cout << "Ice XP after unequip action = " << ice->getXP() << std::endl << std::endl;
	me->equip(ice);

	// проверка копирования Character
	ICharacter* copy_me = me;
	copy_me->use(1, *bob);
	std::cout << "Cure XP after copy_me action = " << cure->getXP() << std::endl << std::endl;

	// проверка присвоения Character
	ICharacter* assign_me(me);
	assign_me->use(1, *bob);
	std::cout << "Cure after assign_me action XP = " << cure->getXP() << std::endl << std::endl;

	delete bob;
	delete me;
	delete src;
}
