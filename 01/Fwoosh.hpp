#pragma once
#include "ASpell.hpp"
#include <iostream>

class Fwoosh : public ASpell {
public:
	Fwoosh();
	~Fwoosh(); // we have to overwrite virtual destructor
	
	ASpell* clone() const;
};
