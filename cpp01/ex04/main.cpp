/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:14:19 by agaland           #+#    #+#             */
/*   Updated: 2025/09/03 00:46:40 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool	replaceFind(std::ifstream& File, std::string& search, std::string& replace, std::string& result)
{
	std::string buff, result;
	size_t		foundPos;
	bool		found = false;
	
	while (std::getline(File, buff))
	{
		while ((foundPos = buff.find(search)) != std::string::npos)
		{
				found = true;
				buff.erase(foundPos, search.length());
				buff.insert(foundPos, replace);
		}
		result += buff;
		result += "\n";
	}
	
	File.close();
		
	if (!found)
	{
		std::cout << "No occurrences were found." << std::endl;
		return false;
	}
	return true;
}

bool	openReadFile(std::ifstream& File, std::string& filename)
{
	File.open(filename.c_str());
	
	if (!File)
	{
		std::cout << "Error: file doesn't exist or access was denied" << std::endl;
		return false;
	}
	
	if (File.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "File is empty" << std::endl;
		return false;
	}
	return true;
}

bool	openWriteFile(std::string& result)
{
	std::ofstream OutFile("outfile.replace");
	if (!OutFile)
	{
		std::cout << "Error: access was denied" << std::endl;
		return false;
	}
	
	OutFile << result;
	OutFile.close();
	std::cout << "All [s1] occurrences successfully replaced." << std::endl;
	
	return true;
}

int	main(int ac, char **av)
{
	std::cout << "----------EX04---------" << std::endl;
	if (ac != 4)
	{
		std::cout << "this program requires 3 parameters: <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (!filename.empty() && !s1.empty())
	{
		std::ifstream File1;
	
		if (!openReadFile(File1, filename))
			return 1;
		
		std::string	result;
		
		if (!replaceFind(File1, s1, s2, result))
			return 1;

		if (!openWriteFile(result))
			return 1;
	}
	else
	{
		std::cout << "<filename> and/or <s1> parameter(s) shouldn't be empty" << std::endl;
		return 1;
	}
	return 0;
}
