/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:56:56 by agaland           #+#    #+#             */
/*   Updated: 2025/08/29 19:34:29 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void Contact::addFirstName(std::string input)
{
	firstName = input;
}
	
void Contact::addLastName(std::string input)
{
	lastName = input;
}

void Contact::addNickName(std::string input)
{
	nickName = input;
}

void Contact::addPhoneNumber(std::string input)
{
	phoneNumber = input;
}

void Contact::addDarkestSecret(std::string input)
{
	darkestSecret = input;
}

std::string	Contact::getFirstName(void) const
{
	return firstName;
}
std::string	Contact::getLastName(void) const
{
	return lastName;
}

std::string	Contact::getNickName(void) const
{
	return nickName;
}

std::string	Contact::getPhoneNumber(void) const
{
	return phoneNumber;
}

std::string	Contact::getDarkestSecret(void) const
{
	return darkestSecret;
}