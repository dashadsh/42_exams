#include "BrickWall.hpp"

// class BrickWall : public ATarget {
// public:
// 	BrickWall();
// 	~BrickWall();
// 	ATarget* clone() const;
// };

// ================================================================

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}
BrickWall::~BrickWall() {}
ATarget* BrickWall::clone() const { return (new BrickWall()); }