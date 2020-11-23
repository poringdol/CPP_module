#pragma once

#include <string>
#include "ISpaceMarine.class.hpp"

class TacticalMarine : public ISpaceMarine {

private:
	std::string	type;

public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &);
	~TacticalMarine();

	TacticalMarine &operator=(const TacticalMarine &);

	virtual ISpaceMarine* clone() const override;
	virtual void battleCry() const override;
	virtual void rangedAttack() const override;
	virtual void meleeAttack() const override;
	void		 bornMessage() const;
};
