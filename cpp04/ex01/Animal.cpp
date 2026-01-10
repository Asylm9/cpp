/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:31:49 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 20:31:50 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "[Animal] default constructor called" << std::endl;
}


Animal::Animal(const Animal& other)
{
	std::cout << "[Animal] copy constructor called" << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "[Animal] destructor called" << std::endl;
	
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "[Animal] copy assignment operator called" << std::endl;
	
	if (this != &rhs)
		type = rhs.type;
	
	return (*this);
}

std::string	Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "The " << type << " makes some random noises" << std::endl;
}
