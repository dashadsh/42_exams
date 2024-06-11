#include "ATarget.hpp"

// class ATarget {
// protected:
// 	std::string type;

// public:
// 	ATarget(const std::string& type);

// 	virtual ~ATarget();
// 	ATarget(const ATarget& obj);
// 	ATarget& operator=(const ATarget& rhs);

// 	const std::string getType() const;

// 	virtual ATarget* clone() const = 0;

// 	const void getHitBySpell(const ASpell& spell);
// };

// ================================================================

ATarget::ATarget(const std::string& type) : type(type) {}
ATarget::~ATarget() {}
ATarget::ATarget(const ATarget& obj) { *this = obj; }
ATarget& ATarget::operator=(const ATarget& rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

const std::string ATarget::getType() const { return this->type; }

void ATarget::getHitBySpell(const ASpell& spell) const {
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}