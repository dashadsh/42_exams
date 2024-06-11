#include "TargetGenerator.hpp"

// class TargetGenerator {
// private:
// 	TargetGenerator(const TargetGenerator& obj);
// 	TargetGenerator& operator=(const TargetGenerator& rhs);

// 	// std::map<std::string, ASpell *> spells;

// public:
// 	TargetGenerator();
// 	~TargetGenerator();

// 	void learnTargetType(const ATarget* target);
// 	void forgetTargetType(const std::string& targetName);
// 	ATarget* createTarget(const std::string& targetName);
// };

TargetGenerator::TargetGenerator(const TargetGenerator& obj) {} // ???
TargetGenerator& TargetGenerator::operator=(const TargetGenerator& rhs) {} // ???
TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(const ATarget* target) {
	if (target) { // Check if the spell is not null
		std::map<std::string, ATarget*>::iterator it = this->targets.find(target->getType());
		if (it == this->targets.end()) // Check if the spell is not already in the map
			this->targets[target->getType()] = target->clone();
	}
}
void TargetGenerator::forgetTargetType(const std::string& targetName) {

	std::map<std::string, ATarget*>::iterator it = this->targets.find(targetName);
	if (it != this->targets.end()) {
		delete it->second; // Properly delete the allocated memory
		this->targets.erase(it); // Remove the entry from the map
	}
}

// creates sepatate instance of Spell using the "spells" book
ATarget* TargetGenerator::createTarget(const std::string& targetName) {

    std::map<std::string, ATarget*>::const_iterator it = targets.find(targetName);
	if (it != targets.end()) {
        return it->second->clone();
    }
    return NULL;
}