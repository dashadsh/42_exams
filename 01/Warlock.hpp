#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock {
private:
	Warlock();
	Warlock(const Warlock& obj);
	Warlock& operator=(const Warlock& rhs);

	std::string name;
	std::string title;

	std::map<std::string, ASpell*> spellBook;

public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();

	const std::string& getName() const;
	const std::string& getTitle() const;

	void setTitle(const std::string& newTitle);

	void introduce() const;

	void learnSpell(const ASpell* spellToLearn);
	void forgetSpell(const std::string& spellToForget);
	void launchSpell(const std::string& spellToLaunch, const ATarget& targetToHit);
};