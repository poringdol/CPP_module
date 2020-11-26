#pragma once

#include <string>
#include "ISpaceMarine.interface.hpp"

class AssaultTerminator : public ISpaceMarine {

private:
	std::string	type;

public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &);
	AssaultTerminator &operator=(const AssaultTerminator &);
	~AssaultTerminator();

	virtual ISpaceMarine* clone() const override;
	virtual void battleCry() const override;
	virtual void rangedAttack() const override;
	virtual void meleeAttack() const override;
	void		 bornMessage() const;
};
