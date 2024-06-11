#pragma once
#include "ATarget.hpp"
#include <iostream>

class Dummy : public ATarget {
public:
	Dummy();
	~Dummy(); // we have to overwrite virtual destructor
	
	ATarget* clone() const;
};