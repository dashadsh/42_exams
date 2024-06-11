#include "Warlock.hpp"

// class Warlock {
// private:
// 	Warlock();
// 	Warlock(const Warlock& other);
// 	Warlock& operator=(const Warlock& rhs);

// 	std::string name;
// 	std::string title;

// public:
// 	Warlock(const std::string& name, const std::string& title);
// 	~Warlock();

// 	const std::string& getName() const;
// 	const std::string& getTitle() const;

// 	void setTitle(const std::string& title);

// 	void introduce() const;
// };

// ================================================================

// Warlock::Warlock() {}

// anyway private => no reason to improve function
Warlock::Warlock(const Warlock& other) {
	*this = other;
}

// anyway private => no reason to improve function
Warlock& Warlock::operator=(const Warlock& rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return *this;
}

Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title) {
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->name << ": My job here is done!" << std::endl;
	std::map<std::string, ASpell*>::iterator it = spells.begin();
	for (; it != spells.end(); it++)
		delete it->second; // PROOF!
	spells.clear(); // PROOF!
}

const std::string& Warlock::getName() const { return this->name;}
const std::string& Warlock::getTitle() const { return this->title;}

void Warlock::setTitle(const std::string& title) { this->title = title; }

void Warlock::introduce() const {
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(const ASpell* spell) {
	if (spell) { // Check if the spell is not null
		std::map<std::string, ASpell*>::iterator it = this->spells.find(spell->getName());
		if (it == this->spells.end()) // Check if the spell is not already in the map
			this->spells[spell->getName()] = spell->clone();
	}
}

void Warlock::forgetSpell(const std::string& spellName) {
	std::map<std::string, ASpell*>::iterator it = this->spells.find(spellName);
	if (it != this->spells.end()) {
		delete it->second; // Properly delete the allocated memory
		this->spells.erase(it); // Remove the entry from the map
	}
}

void Warlock::launchSpell(const std::string& spellName, const ATarget& target) {
	std::map<std::string, ASpell*>::iterator it = this->spells.find(spellName);
	if (it != this->spells.end()) {
		it->second->launch(target);
	}
}
