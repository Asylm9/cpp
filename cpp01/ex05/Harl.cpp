/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:14:58 by agaland           #+#    #+#             */
/*   Updated: 2025/09/03 02:00:08 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

	Harl::Harl(void) {}

	Harl::~Harl(void) {}

	void	Harl::complain(std::string level)
	{
		int		i;
		void	(Harl::*funcArray[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

		std::string levelArray[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		for (i = 0; i < 4; i++)
		{
			if (level == levelArray[i])
			{
				(this->*funcArray[i])();
				return;
			}
		}
		std::cout << "WRONG LEVEL NAME: Try again!" << std::endl;
	}

	void	Harl::debug(void)
	{
		std::cout << "DEBUG: " 
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
		<< std::endl; 
	}


	void	Harl::info(void)
	{
		std::cout << "INFO: " 
		<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! "
		<< "If you did, I wouldn't be asking for more!" 
		<< std::endl; 
	}


	void	Harl::warning(void)
	{
		std::cout << "WARNING: " 
		<< "I think I deserve to have some extra bacon for free. "
		<< "I've been coming for years, whereas you started working here just last month." 
		<< std::endl; 
	}


	void	Harl::error(void)
	{
		std::cout << "ERROR: " 
		<<  "This is unacceptable! I want to speak to the manager now."
		<< std::endl; 
	}
