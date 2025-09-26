/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:06:35 by agaland           #+#    #+#             */
/*   Updated: 2025/09/02 16:06:38 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int	main(void)
{
	std::cout << "----------------EX02---------------"<< std::endl;

	std::string str =  "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "string str memory address: " << &str << std::endl;
	std::cout << "stringPTR pointed address: " << stringPTR << std::endl;
	std::cout << "stringPTR memory address: " << &stringPTR << std::endl;
	std::cout << "stringREF memory address: " << &stringREF << std::endl;

	std::cout << "---------------------------------"<< std::endl;

	std::cout << "string str content : " << str << std::endl;
	std::cout << "stringPTR content: " << *stringPTR << std::endl;
	std::cout << "stringREF content: " << stringREF << std::endl;

	return 0;
}
