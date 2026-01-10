/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:33:06 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 20:33:07 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal(), _brain(new Brain())
{
	std::cout << "[Cat] default constructor called" << std::endl;
	type = "Cat";
}


Cat::Cat(const Cat& other) : AAnimal(other), _brain(new Brain(*other._brain))
{
	std::cout << "[Cat] copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
	delete _brain;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "[Cat] copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Brain*	Cat::getBrain() const
{
	return _brain;
}

void	Cat::makeSound() const
{
	std::cout << "The " << type << " meows" << std::endl;
}
