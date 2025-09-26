/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:12:41 by agaland           #+#    #+#             */
/*   Updated: 2025/09/02 16:12:43 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(0)
{
	std::cout << "[ " << _name << " has been created ]" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "[ " << _name << " has been destroyed ]" << std::endl;
}
void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;

}

void	HumanB::attack(void)
{
	if (_weapon == 0)
		std::cout << _name << " is bare hands!!!" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
