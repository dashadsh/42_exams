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

Warlock::Warlock(const Warlock& other) {
	*this = other;
}
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
}

const std::string& Warlock::getName() const { return this->name;}
const std::string& Warlock::getTitle() const { return this->title;}

void Warlock::setTitle(const std::string& title) { this->title = title; }

void Warlock::introduce() const {
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}


