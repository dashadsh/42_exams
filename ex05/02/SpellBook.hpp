#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook {
private:
	SpellBook(const SpellBook& obj);
	SpellBook& operator=(const SpellBook& rhs);

	std::map<std::string, ASpell *> spells;

public:
	SpellBook();
	~SpellBook();

	void learnSpell(const ASpell* spell);
	void forgetSpell(const std::string& spellName);
	ASpell* createSpell(const std::string& spellName);
};