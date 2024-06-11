#include "SpellBook.hpp"

// class SpellBook {
// private:
// 	SpellBook(const SpellBook& obj);
// 	SpellBook& operator=(const SpellBook& rhs);


// public:
// 	SpellBook();
// 	~SpellBook();

// 	void learnSpell(ASpell*);
// 	void forgetSpell(string const &)
// 	ASpell* createSpell(string const &)
// };

SpellBook::SpellBook(const SpellBook& obj) {} // ???
SpellBook& SpellBook::operator=(const SpellBook& rhs) {} // ???

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {
	std::map<std::string, ASpell*>::iterator it = spells.begin();
	for (; it != spells.end(); it++)
		delete it->second;
	this->spells.clear(); // deletes all form map except memory allocated stuff
}

void SpellBook::learnSpell(const ASpell* spell) {
	if (spell) { // Check if the spell is not null
		std::map<std::string, ASpell*>::iterator it = this->spells.find(spell->getName());
		if (it == this->spells.end()) // Check if the spell is not already in the map
			this->spells[spell->getName()] = spell->clone();
	}
}
void SpellBook::forgetSpell(const std::string& spellName) {
	std::map<std::string, ASpell*>::iterator it = this->spells.find(spellName);
	if (it != this->spells.end()) {
		delete it->second; // Properly delete the allocated memory
		this->spells.erase(it); // Remove the entry from the map
	}
}

// creates sepatate instance of Spell using the "spells" book
ASpell* SpellBook::createSpell(const std::string& spellName) {
    std::map<std::string, ASpell*>::const_iterator it = spells.find(spellName);
	if (it != spells.end()) {
        return it->second->clone();
    }
    return NULL;
}