#pragma once

#include <string>

class Enemy {

protected:
	int HP;
	std::string Type;

	Enemy();
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &);
	Enemy &operator=(const Enemy &);

public:
	virtual ~Enemy();

	int			 getHP() const;
	std::string	 getType() const;
	void		 setHP(int);
	void		 setType(std::string);

	virtual void takeDamage(int);
};