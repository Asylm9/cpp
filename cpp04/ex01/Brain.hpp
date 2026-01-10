#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define SIZE 100

class Brain
{
	public:

	Brain();
	Brain(const Brain& other);
	virtual ~Brain();

	Brain& operator=(const Brain& rhs);

	std::string		getIdeas() const;
	void			setIdeas(std::string value, int i);

	private:

	std::string _ideas[100];
	
};

#endif
