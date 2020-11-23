#pragma once

#include <string>

class Enemy {

protected:
	int HP;
	std::string Type;

	Enemy();

public:
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &enemy);
	~Enemy();
	
	Enemy &operator=(const Enemy &enemy);

	int			 getHP() const;
	std::string	 getType() const;
	void		 setHP(int);
	void		 setType(std::string);

	virtual void takeDamage(int);
};