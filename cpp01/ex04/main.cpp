/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:14:19 by agaland           #+#    #+#             */
/*   Updated: 2025/11/28 13:42:36 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool	replaceFind(std::ifstream& file, std::string const& search, std::string const& replace, std::ofstream& outFile)
{
	std::string buff;
	size_t		foundPos;
	bool		found = false;
	
	while (std::getline(file, buff))
	{
		foundPos = 0;
		while ((foundPos = buff.find(search, foundPos)) != std::string::npos)
		{
				found = true;
				buff.erase(foundPos, search.length());
				buff.insert(foundPos, replace);
				foundPos += replace.length();
		}

		if (!file.eof())
			outFile << buff << "\n";
	}
			
	if (!found)
	{
		std::cerr << "No occurrences were found." << std::endl;
		return false;
	}
	std::cout << "All [s1] occurrences successfully replaced." << std::endl;
	return true;
}

bool	openReadFile(std::ifstream& file, std::string const& filename)
{
	file.open(filename.c_str());
	
	if (!file)
	{
		std::cerr << "Error: cannot open input file '" << filename << "'" << std::endl;
		return false;
	}
	
	if (file.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "File is empty" << std::endl;
		return false;
	}
	return true;
}

int	main(int ac, char **av)
{
	std::cout << "----------EX04---------" << std::endl;
	if (ac != 4)
	{
		std::cerr << "this program requires 3 parameters: <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (filename.empty() || s1.empty())
	{
		std::cerr << "<filename> and/or <s1> parameter(s) shouldn't be empty" << std::endl;
		return 1;
	}

	std::ifstream inputFile;

	if (!openReadFile(inputFile, filename))
		return 1;
	
	std::string outfileName = filename + ".replace";
	std::ofstream outFile(outfileName.c_str());
	
	if (!outFile)
	{
		std::cerr << "Error: cannot open output file '" << outfileName << "'" << std::endl;
		return 1;
	}
	
	if (!replaceFind(inputFile, s1, s2, outFile))
		return 1;

	return 0;
}
