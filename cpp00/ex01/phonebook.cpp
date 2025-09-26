/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:53:36 by agaland           #+#    #+#             */
/*   Updated: 2025/08/29 21:29:46 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void) : nextIndex(0) {}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::is_empty()
{
	std::cout << "Field cannot be empty!!!" << std::endl;
}

void PhoneBook::getInput(std::string &input)
{
	std::getline(std::cin, input);
	if (input.empty())
		is_empty();
		
}

int		PhoneBook::isValidNumber(std::string phoneNumber)
{
	int i;
	
	for (i = 0; phoneNumber[i]; i++)
	{
		if (!std::isdigit(phoneNumber[i]))
		{
			std::cout << "non digits detected!" << std::endl;
			return 0;
		}
	}
	return 1;
}

void PhoneBook::add(void)
{
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
	int			digit = 1;
	
	while (firstName.empty())
	{
		std::cout << "First name: ";
		getInput(firstName);
		
	}
	while (lastName.empty())
	{
		std::cout << "Last name: ";
		getInput(lastName);
	}
	while (nickName.empty())
	{
		std::cout << "Nick name: ";
		getInput(nickName);
	}
	while (phoneNumber.empty() || !digit)
	{
		std::cout << "Phone number: ";
		getInput(phoneNumber);
		digit = isValidNumber(phoneNumber);
	}
	while (darkestSecret.empty())
	{
		std::cout << "Darkest secret hehehe: ";
		getInput(darkestSecret);
	}

	contactList[nextIndex].addFirstName(firstName);
	contactList[nextIndex].addLastName(lastName);
	contactList[nextIndex].addNickName(nickName);
	contactList[nextIndex].addPhoneNumber(phoneNumber);
	contactList[nextIndex].addDarkestSecret(darkestSecret);
	
	nextIndex = (nextIndex + 1) % 8;

	std::cout << "Contact succesfully created" << std::endl;
}

std::string PhoneBook::truncateString(const std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::printBook(void)
{
	int	i;
	
	std::cout << std::setw(10) << std::right << "INDEX" << "|";
	std::cout << std::setw(10) << std::right << "FIRST NAME" << "|";
	std::cout << std::setw(10) << std::right << "LAST NAME" << "|";
	std::cout << std::setw(10) << std::right << "NICK NAME" << "|" << std::endl;

	for (i = 0; i < 8; i++)
	{
		if (!contactList[i].getFirstName().empty())
		{
			std::cout << std::setw(10) << std::right << i << "|";
			std::cout << std::setw(10) << std::right << truncateString(contactList[i].getFirstName()) << "|";
			std::cout << std::setw(10) << std::right << truncateString(contactList[i].getLastName()) << "|";
			std::cout << std::setw(10) << std::right << truncateString(contactList[i].getNickName()) << "|" << std::endl;
		}
	}
}


void PhoneBook::search(void)
{
	std::string input;
	int			index = -1;

	if (contactList[0].getFirstName().empty())
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
		
	printBook();
	
	std::cout << "Select index" << std::endl;
	std::getline(std::cin, input);
	std::stringstream ss(input);
	ss >> index;

	if (index >= 0 && index < 8 && !contactList[index].getFirstName().empty())
	{
		std::cout << "First name: " <<contactList[index].getFirstName() << std::endl;
		std::cout << "Last name: " << contactList[index].getLastName() << std::endl;
		std::cout << "Nickname " <<contactList[index].getNickName() << std::endl;
		std::cout << "Phone number: " <<contactList[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contactList[index].getDarkestSecret() << std::endl;
		return;
	}
	
	if (index >= 8)
		std::cout << "Index out of range" << std::endl;	
	else
		std::cout << "No matching contact" << std::endl;
	
}

void PhoneBook::exit(void)
{
	std::cout << "Exiting the program..." << std::endl;
}
