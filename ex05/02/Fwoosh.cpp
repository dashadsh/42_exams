#include "Fwoosh.hpp"

// class Fwoosh : public ASpell {
// public:
// 	Fwoosh();
// 	~Fwoosh();
// 	ASpell* clone() const;
// };

// ================================================================

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}
Fwoosh::~Fwoosh() {}
ASpell* Fwoosh::clone() const { return (new Fwoosh()); }

// return new Fwoosh(*this); 
// in the clone method would make sense if the Fwoosh class had 
// additional member variables that needed to be copied. 
// However, in this case, since the Fwoosh class doesn't have any 
// additional member variables beyond what's inherited from ASpell, 
// calling new Fwoosh() directly in the clone method is sufficient.