#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
protected:
	std::string type;

public:
	ATarget(const std::string& type);

	virtual ~ATarget();
	ATarget(const ATarget& obj);
	ATarget& operator=(const ATarget& rhs);

	const std::string getType() const;

	virtual ATarget* clone() const = 0;

	void getHitBySpell(const ASpell& spell) const; // no 1st const??
};