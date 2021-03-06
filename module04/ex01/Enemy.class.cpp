#include <string>
#include <iostream>
#include "Enemy.class.hpp"

Enemy::Enemy() : HP(0), Type("no type") {}

Enemy::Enemy(int hp, std::string const &type) :
				HP(hp), Type(type) {}

Enemy::Enemy(const Enemy &Enemy) {*this = Enemy;}

Enemy::~Enemy() {}

Enemy	&Enemy::operator=(const Enemy &enemy) {
	HP = enemy.HP;
	Type = enemy.Type;
	return (*this);
}

int			Enemy::getHP() const {return HP;}
std::string	Enemy::getType() const {return Type;}
void		Enemy::setHP(int hp) {HP = hp;}
void		Enemy::setType(std::string type) {Type = type;}

void		Enemy::takeDamage(int damage) {(void)damage;}
