#pragma once

#include "ISpaceMarine.class.hpp"
#include "ISquad.class.hpp"

class Squad : public ISquad{

private:
	ISpaceMarine **squad;
	int			  count;

public:
	Squad();
	Squad(const Squad &);
	~Squad();

	Squad *operator=(const Squad &);

	virtual int getCount() const override;
	virtual ISpaceMarine* getUnit(int) const override;
	virtual int push(ISpaceMarine*) override;

	void		clearSquad(ISpaceMarine **sq, int n);
	void		copySquad(ISpaceMarine **dst, ISpaceMarine **src, int n);
	int			isAlreadyInSquad(ISpaceMarine *sq);
};
