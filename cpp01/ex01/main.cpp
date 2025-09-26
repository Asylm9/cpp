/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:09:18 by agaland           #+#    #+#             */
/*   Updated: 2025/09/02 16:09:22 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int	main(void)
{
	std::cout << "----------EX01---------" << std::endl;
	Zombie* horde;
	int		i = 0, N = 10;

	horde = zombieHorde(N, "Georges");
	for (i = 0; i < N; i++)
	{
		std::cout << "zombie n." << i << ": " << std::endl;
		horde[i].announce();
	}

	delete [] horde;

	return 0;
}
