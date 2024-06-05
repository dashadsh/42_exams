
#include <iostream>

class Warlock {
	public:
		Warlock(const std::string &newName, const std::string &newTitle);
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;

		void setTitle(const std::string& newTitle);
		void introduce() const;


	private:
		Warlock();
		Warlock(const Warlock& obj);
		Warlock& operator= (const Warlock& rhs);

		std::string name;
		std::string title;
};