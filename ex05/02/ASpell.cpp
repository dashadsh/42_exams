#include "ASpell.hpp"

// class ASpell {
// protected:

// 	std::string name;
// 	std::string effects;

// public:
// 	ASpell(const std::string& name, const std::string& effects);

// 	virtual ~ASpell();
// 	ASpell(const ASpell& obj);
// 	ASpell& operator=(const ASpell& rhs);

// 	const std::string getName() const;
// 	const std::string getEffects() const;

// 	virtual ASpell* clone() const = 0;
// };

// ================================================================

ASpell::ASpell(const std::string& name, const std::string& effects) : name(name), effects(effects) {}
ASpell::~ASpell() {}
ASpell::ASpell(const ASpell& obj) { *this = obj; }
ASpell& ASpell::operator=(const ASpell& rhs) {
	if (this != &rhs) {
		this->name = rhs.name;
		this->effects = rhs.effects;
	}
	return *this;
}

const std::string ASpell::getName() const { return this->name; }
const std::string ASpell::getEffects() const { return this->effects; }

void ASpell::launch(const ATarget& target) const {
	target.getHitBySpell(*this); // passing current instance as parameter
}
