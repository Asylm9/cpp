/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:53:11 by agaland           #+#    #+#             */
/*   Updated: 2025/08/29 20:53:59 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int	main(void)
{
	PhoneBook phoneBook;
	std::string input;

	std::cout << "✦ Welcome to my awesome Phonebook ✦" << std::endl;
	std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	while (std::getline(std::cin, input)) 
	{
		if (input == "ADD")
			phoneBook.add();
		else if (input == "SEARCH")
			phoneBook.search();
		else if (input == "EXIT")
		{
			phoneBook.exit();
			break ;
		}
		else
			std::cout << "Wrong input, please try again ♡" << std::endl;
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	}	
	return 0;
}