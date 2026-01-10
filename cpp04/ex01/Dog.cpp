/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:32:14 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 20:32:15 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	std::cout << "[Dog] default constructor called" << std::endl;
	type = "Dog";
}


Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "[Dog] copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] destructor called" << std::endl;
	delete _brain;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "[Dog] copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Brain*	Dog::getBrain() const
{
	return _brain;
}

void	Dog::makeSound() const
{
	std::cout << "The " << type << " barks woof woof" << std::endl;
}
