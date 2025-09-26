/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:07:15 by agaland           #+#    #+#             */
/*   Updated: 2025/09/02 16:07:17 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "----------EX00---------" << std::endl;
	Zombie* newwZombie;

	newwZombie = newZombie("Zorg");
	newwZombie->announce();
	delete(newwZombie);

	std::cout << std::endl;
	std::cout << "~ ꒦✃𓄧 ꒷҂꒦✃𓄧 ꒷҂꒦✃𓄧 ꒷҂꒦✃𓄧 ꒷҂꒦✃𓄧 ꒷҂꒦✃𓄧 ꒷҂꒦~" << std::endl;
	std::cout << std::endl;

	randomChump("Chuck");

	return 0;
}
