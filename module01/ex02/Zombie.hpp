#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
public:
	Zombie();
	Zombie(const std::string& z_name, const std::string& z_type);
	std::string GetName() const;
	std::string GetType() const;
	void announce() const;
	~Zombie();

private:
	std::string name;
	std::string type;
};

#endif
