#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator {
private:
	TargetGenerator(const TargetGenerator& obj);
	TargetGenerator& operator=(const TargetGenerator& rhs);

	std::map<std::string, ATarget*> targets;
	// std::map<std::string, ASpell *> spells;

public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(const ATarget* target);
	void forgetTargetType(const std::string& targetName);
	ATarget* createTarget(const std::string& targetName);
};