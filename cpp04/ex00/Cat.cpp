/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:30:34 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 20:30:35 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "[Cat] default constructor called" << std::endl;
	type = "Cat";
}


Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "[Cat] copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "[Cat] copy assignment operator called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "The " << type << " meows" << std::endl;
}
