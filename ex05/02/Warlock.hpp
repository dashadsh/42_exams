#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <map>

class Warlock {
private:
	// Warlock();
	Warlock(const Warlock& other); // delete in c++11
	Warlock& operator=(const Warlock& rhs); // delete in c++11

	std::string name;
	std::string title;

	// std::map<std::string, ASpell*> spells;
	SpellBook spellBook;


public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();

	const std::string& getName() const;
	const std::string& getTitle() const;

	void setTitle(const std::string& title);

	void introduce() const;

	// keep them same:
	void learnSpell(const ASpell* spell);
	void forgetSpell(const std::string& spellName);
	void launchSpell(const std::string& spellName, const ATarget& target);
};