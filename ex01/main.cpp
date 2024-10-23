/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussato <yussato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:34:58 by yussato           #+#    #+#             */
/*   Updated: 2024/10/23 22:29:10 by yussato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	std::string str;
	PhoneBook pb;

	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, str);
		if (str == "ADD")
			pb.add();
		else if (str == "SEARCH")
			pb.search();
		else if (str == "EXIT")
			break ;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
