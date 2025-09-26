/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:09:51 by agaland           #+#    #+#             */
/*   Updated: 2025/09/02 16:09:53 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) 
{
	std::cout << "(" << _name << " has been created)" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) 
{
	std::cout << "(" << _name << " has been created)" << std::endl;
}

Zombie::~Zombie() 
{
	std::cout << "(" << _name << " has been destroyed)" << std::endl;
};

void	Zombie::setName(std::string name)
{
	this->_name = name;
}


void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
