#pragma once

#include <string>
#include "ISpaceMarine.interface.hpp"

class TacticalMarine : public ISpaceMarine {

private:
	std::string	type;

public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &);
	TacticalMarine &operator=(const TacticalMarine &);
	~TacticalMarine();

	virtual ISpaceMarine* clone() const override;
	virtual void battleCry() const override;
	virtual void rangedAttack() const override;
	virtual void meleeAttack() const override;
	void		 bornMessage() const;
};
