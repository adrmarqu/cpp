/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:51:04 by adrmarqu          #+#    #+#             */
/*   Updated: 2025/04/10 14:18:43 by adrmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>

typedef std::map<std::string, double> Map;

class BitcoinExchange
{
	public:

		BitcoinExchange(char const *path);
		~BitcoinExchange();

	private:
	
		Map	_database;

		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &other);
		BitcoinExchange	&operator=(BitcoinExchange const &other);

		bool	getData();
		void	readInput(std::ifstream &file);

		bool	checkDate(int year, int month, int day) const;
		bool	checkZero(std::string const &str) const;

		std::string	getDate(std::string const &line) const;
		double		getValue(std::string const &line) const;

		void		printData(std::string str, double val);

};

#endif
