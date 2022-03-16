#if !defined(HUMANA_HPP)
#define HUMANA_HPP

#include "Human.hpp"

class HumanA : public Human{
	public:
		HumanA(std::string name, Weapon weapon);
};

#endif // HUMANA_HPP
