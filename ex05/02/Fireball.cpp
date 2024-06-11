#include "Fireball.hpp"

// class Fireball : public ASpell {
// public:
// 	Fireball();
// 	~Fireball();
// 	ASpell* clone() const;
// };

// ================================================================

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}
Fireball::~Fireball() {}
ASpell* Fireball::clone() const { return (new Fireball()); }