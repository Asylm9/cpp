/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:13:21 by agaland           #+#    #+#             */
/*   Updated: 2025/09/02 16:13:23 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	std::cout << "----------EX03---------" << std::endl;
	Weapon weapon;
	Weapon weapon2;


	weapon.setType("knife");
	weapon2.setType("gun");

	HumanA humanA("Abel", weapon);
	humanA.attack();
	HumanB humanB("Cain");

	humanB.attack();
	humanB.setWeapon(weapon2);
	weapon.setType("truelle");
	humanB.attack();

	humanA.attack(); 

	return 0;
}

/* int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		
	}
	return 0;
} */
