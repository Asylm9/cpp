/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 15:12:29 by agaland           #+#    #+#             */
/*   Updated: 2025/08/29 19:10:01 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;	
	else
	{
		for (i = 1; av[i]; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				char maj = std::toupper(av[i][j]);
				std::cout << maj;
			}
			if (av[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
