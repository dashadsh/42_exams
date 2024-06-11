#include "ATarget.hpp"

// class ATarget {
// protected:
// 	std::string type;

// public:
// 	ATarget(const std::string& type);

// 	~ATarget();
// 	ATarget(const ATarget& obj);
// 	ATarget& operator=(const ATarget& rhs);

// 	const std::string getType() const;

// 	virtual ATarget* clone() const = 0;

// 	void getHitBySpell(const ASpell& spell) const; // 2ns const??
// }


ATarget::ATarget(const std::string& type) : type(type) {}

ATarget::~ATarget() {}
ATarget::ATarget(const ATarget& obj) : type(obj.type) {}
ATarget& ATarget::operator=(const ATarget& rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

const std::string ATarget::getType() const { return this->type;}

void ATarget::getHitBySpell(const ASpell& spell) const { // 2ns const??
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
} // ??? spell.effects
