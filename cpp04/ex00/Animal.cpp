/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 23:52:03 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 02:06:43 by agaland          ###   ########.fr       */
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
	std::cout << "[Animal] destructor constructor called" << std::endl;
	
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
