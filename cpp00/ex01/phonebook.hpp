/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:36:16 by agaland           #+#    #+#             */
/*   Updated: 2025/08/29 21:19:41 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <sstream>
#include <iomanip>
#include "contact.hpp"


class PhoneBook
{
	public:

	PhoneBook(void);
	~PhoneBook(void);

	void add(void);
	void search(void);
	void exit(void);

	private:

	Contact	contactList[8];
	int		nextIndex;
	void 	is_empty(void);
	void 	printBook(void);
	int		isValidNumber(std::string phoneNumber);
	void 	getInput(std::string &input);
	std::string truncateString(const std::string &str);

};

#endif