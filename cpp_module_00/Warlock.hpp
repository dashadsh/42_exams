

#include <iostream>

class Warlock {
	private:
		std::string name;
		std::string title;

	public:
		// constructor
		Warlock(std::string const &name, std::string const &title);

		// destructor
		~Warlock();

		
		// setter
		void setTitle(std::string const &titleToSet);

		// getter
		const std::string &getName() const;
		const std::string &getTitle() const;
	};

