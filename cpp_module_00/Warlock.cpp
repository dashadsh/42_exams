
#include "Warlock.hpp"

// ===================== PUBLIC =======================================

Warlock::Warlock(const std::string& newName, const std::string& newTitle) : name(newName), title(newTitle) {
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName() const{
	return this->name;
}

const std::string& Warlock::getTitle() const{
	return this->title;
}

void Warlock::setTitle(const std::string& newTitle){
	this->title = newTitle;
}

void Warlock::introduce() const{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

// ===================== PRIVATE ==========================================

Warlock::Warlock(){}

Warlock::~Warlock(){
	std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock& obj){
	*this = obj;
}

Warlock& Warlock::operator= (const Warlock& rhs) {
	if (this != &rhs) { 
	this->name = rhs.name;
	this->title = rhs.title; 
	}
	return *this;
}

