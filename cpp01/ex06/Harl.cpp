/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:15:46 by agaland           #+#    #+#             */
/*   Updated: 2025/09/03 02:00:27 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

	Harl::Harl(void) {}

	Harl::~Harl(void) {}

	void	Harl::complain(std::string level)
	{
		std::string levelArray[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

		int	i = 0;
		while (i < 4 && level != levelArray[i])
			i++;

		switch(i)
		{
			case 0:
				debug();
			/* fall through */
			case 1:
				info();
			/* fall through */
			case 2:
				warning();
			/* fall through */
			case 3:
				error();
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}

	void	Harl::debug(void)
	{
		std::cout << "[ DEBUG ]" << std::endl;
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl; 
	}


	void	Harl::info(void)
	{
		std::cout << "[ INFO ] " << std::endl;
		std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! "
		<< "If you did, I wouldn't be asking for more!" 
		<< std::endl; 
	}


	void	Harl::warning(void)
	{
		std::cout << "[ WARNING ]" << std::endl;
		std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I've been coming for years, whereas you started working here just last month." 
		<< std::endl; 
	}


	void	Harl::error(void)
	{
		std::cout << "[ ERROR ]" << std::endl; 
		std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl; 
	}

