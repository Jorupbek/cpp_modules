#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

#define IDEAS 100

class Brain {
private:
	std::string _ideas[IDEAS];

public:
	Brain();
	Brain(Brain const &src);
	Brain &operator=(const Brain &rhs);
	~Brain();

	std::string getIdea(int i) const;
};


#endif
