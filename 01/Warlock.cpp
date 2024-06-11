#include "Warlock.hpp"

// class Warlock {
// private:
// 	Warlock();
// 	Warlock(const Warlock& obj);
// 	Warlock& operator=(const Warlock& rhs);

// 	std::string name;
// 	std::string title;

// public:
// 	Warlock(const std::string& name, const std::string& title);
// 	~Warlock();

// 	const std::string& getName() const;
// 	const std::string& getTitle() const;
// };

// ============== PRIVATE ==============
Warlock::Warlock() {}
Warlock::Warlock(const Warlock& obj) : name(obj.name), title(obj.title) {}
Warlock& Warlock::operator=(const Warlock& rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->title = rhs.title;
	}
	return *this;
}

// ============== PIBLIC ==============
Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title) {
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock(){
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const { return this->name; }
const std::string& Warlock::getTitle() const{ return this->title; }

void Warlock::setTitle(const std::string& newTitle) { this->title = newTitle ;}

void Warlock::introduce() const { 
	std::cout << this->name << ": I am "<< this->name << ", " << this->title << "!" << std::endl;
} 
	// std::map<std::string, ASpell*> spellBook;

	// void learnSpell(const ASpell* spellToLearn);
	// void forgetSpell(const std::string& spellToForget);
	// void launchSpell(const std::string& spellToLaunch, const ATarget& targetToHit);

void Warlock::learnSpell(const ASpell* spellToLearn) {
	if (spellToLearn) {
		std::string spellName = spellToLearn->getName();
		if (spellBook.find(spellName) == spellBook.end())
			spellBook[spellName] = spellToLearn->clone(); // can we just use parameter??
	}
}

void Warlock::forgetSpell(const std::string& spellToForget) {
	if (spellBook.find(spellToForget) != spellBook.end())
		spellBook.erase(spellBook.find(spellToForget));
}

void Warlock::launchSpell(const std::string& spellToLaunch, const ATarget& targetToHit) {
	if (spellBook.find(spellToLaunch) != spellBook.end())
		spellBook[spellToLaunch]->launch(targetToHit);

}
	
	
