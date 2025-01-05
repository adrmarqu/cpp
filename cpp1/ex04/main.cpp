/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:52:01 by adrmarqu          #+#    #+#             */
/*   Updated: 2024/12/20 15:01:11 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

static int	checkReplace(std::string data, std::string s1, size_t &idx)
{
	size_t	i;

	for (i = 0; i < s1.length(); i++)
	{
		if (data[idx + i] != s1[i])
			return 0;
	}
	idx += i - 1;
	return 1;
}

static void	setData(std::ofstream &file, std::string data, std::string s1, std::string s2)
{
	int	move;

	for (size_t i = 0; i < data.length(); i++)
	{
		move = checkReplace(data, s1, i);
		if (move)
			file << s2;
		else
			file << data[i];
	}
}

static void	getData(std::ifstream &file, std::string &data)
{
	char	c = '\0';

	while (!file.eof())
	{
		file >> std::noskipws >> c;
		
		if (!file.eof())
			data += c;
	}
}

static int	openFile(const char *name, std::ifstream &file)
{
	file.open(name);
	if (file.is_open())
		std::cout << "File '" << name << "' opened" << std::endl;
	else
    	return std::cerr << "Error to open the file '" << name << "'" << std::endl, 1;
	return 0;
}

static int	createFile(const char *name, std::ofstream &file)
{
	file.open((std::string(name) + ".replace").c_str());
	if (file.is_open())
		std::cout << "File '" << name << ".replace' created" << std::endl;
	else
    	return std::cerr << "Error to create the file '" << name << ".replace'" << std::endl, 1;
	return 0;
}

int	main(int ac, char **av)
{
	std::string		data;
	std::ifstream	infile;
	std::ofstream	outfile;
	
	if (ac != 4)
		return std::cerr << "Error: You need to have 3 arguments" << std::endl, 1;
	if (std::string(av[2]).empty())
		return std::cerr << "Error: S1 can not be empty", 1;
	if (openFile(av[1], infile) || createFile(av[1], outfile))
		return 1;
	getData(infile, data);
	infile.close();
	setData(outfile, data, std::string(av[2]), std::string(av[3]));
	outfile.close();
	return 0;
}
