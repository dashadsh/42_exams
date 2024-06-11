#include "Fwoosh.hpp"

// class Fwoosh : public ASpell {
// public:
// 	Fwoosh();
// 	~Fwoosh(); // we have to overwrite virtual destructor
	
// 	ASpell* clone() const;
// };

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}
Fwoosh::~Fwoosh() {}

ASpell* Fwoosh::clone() const {
	return (new Fwoosh());
}
