#include <iostream>

class Warlock {
private:
	// Warlock(); // it's Coplien, not canonical
	Warlock(const Warlock& other);
	Warlock& operator=(const Warlock& rhs);

	std::string name;
	std::string title;

public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();

	const std::string& getName() const;
	const std::string& getTitle() const;

	void setTitle(const std::string& title);

	void introduce() const;
};