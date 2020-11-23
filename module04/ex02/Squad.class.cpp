#include <cstdlib>
#include "ISpaceMarine.class.hpp"
#include "Squad.class.hpp"

Squad::Squad() : squad(NULL), count(0) {}

Squad::Squad(const Squad &sq) {*this = sq;}

Squad::~Squad() {
	clearSquad(squad, count);
}

Squad *Squad::operator=(const Squad &sq) {
	clearSquad(squad, count);
	squad = new ISpaceMarine* [sq.count];
	copySquad(squad, sq.squad, count);
	count = sq.count;
	return this;
}

int Squad::getCount() const {return count;}

ISpaceMarine* Squad::getUnit(int i) const {
	if (i >= count)
		return NULL;
	return squad[i];
}

int Squad::push(ISpaceMarine *sq) {
	if (!sq || isAlreadyInSquad(sq))
		return count;
	ISpaceMarine **tmp = new ISpaceMarine* [count + 1];
	if (count) {
		copySquad(tmp, squad, count);
		clearSquad(squad, count);
	}
	squad = tmp;
	squad[count] = sq;
	count++;
	return count;
}

void Squad::clearSquad(ISpaceMarine **sq, int n) {
	if (sq) {
		while (--n)
			delete sq[n];
		delete[] sq;
		sq = NULL;
	}
}

void Squad::copySquad(ISpaceMarine **dst, ISpaceMarine **src, int n) {
	while (--n) {
		dst[n] = src[n];
	}
}

int Squad::isAlreadyInSquad(ISpaceMarine *sq) {
	for (int i = 0; i < count; i++) {
		if (squad[i] == sq)
			return 1;
	}
	return 0;
}
