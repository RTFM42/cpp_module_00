/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussato <yussato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:17:00 by yussato           #+#    #+#             */
/*   Updated: 2024/10/23 22:31:18 by yussato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->__index__ = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::__print__(int index)
{
	if (!this->__contacts__[index].getFname().size() && std::cout << "There is no contact at this index." << std::endl)
		return;

	std::cout << "first name: "
			  << this->__contacts__[index].getFname() << std::endl;
	std::cout << "last name: "
			  << this->__contacts__[index].getLname() << std::endl;
	std::cout << "nickname: "
			  << this->__contacts__[index].getNname() << std::endl;
	std::cout << "phone number: "
			  << this->__contacts__[index].getPhone() << std::endl;
	std::cout << "darkest secret: "
			  << this->__contacts__[index].getSecret() << std::endl;
}

void PhoneBook::add(void)
{
	std::string str;

	str = "";
	while (!std::cin.eof() && str == "" && std::cout << "ADD> first name>")
		if (std::getline(std::cin, str) && str != "")
			this->__contacts__[this->__index__ % 8].setFname(str);
	str = "";
	while (!std::cin.eof() && str == "" && std::cout << "ADD> last name>")
		if (std::getline(std::cin, str) && str != "")
			this->__contacts__[this->__index__ % 8].setLname(str);
	str = "";
	while (!std::cin.eof() && str == "" && std::cout << "ADD> nickname>")
		if (std::getline(std::cin, str) && str != "")
			this->__contacts__[this->__index__ % 8].setNname(str);
	str = "";
	while (!std::cin.eof() && str == "" && std::cout << "ADD> phone number>")
		if (std::getline(std::cin, str) && str != "")
			this->__contacts__[this->__index__ % 8].setPhone(str);
	str = "";
	while (!std::cin.eof() && str == "" && std::cout << "ADD> darkest secret>")
		if (std::getline(std::cin, str) && str != "")
			this->__contacts__[this->__index__ % 8].setSecret(str);
	this->__index__++;
}

std::string fix10(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str += ".";
	}
	else
		while (str.size() < 10)
			str = " " + str;
	return (str);
}

void PhoneBook::search(void)
{
	int index;
	std::string index_str;

	index = 0;
	if (this->__index__ == 0 && std::cout << "There is no contact." << std::endl)
		return;
	while (++index <= this->__index__ && index <= 8)
	{
		std::cout << "|" << fix10(std::string(1, index + '0'));
		std::cout << "|" << fix10(this->__contacts__[index - 1].getFname());
		std::cout << "|" << fix10(this->__contacts__[index - 1].getLname());
		std::cout << "|" << fix10(this->__contacts__[index - 1].getNname());
		std::cout << "|" << std::endl;
	}
	while (!std::cin.eof())
	{
		std::cout << "SEARCH> index>";
		if (std::getline(std::cin, index_str), index_str != "")
		{
			if (index_str.size() == 1 && '1' <= index_str[0] && index_str[0] <= '8')
			{
				index = index_str[0] - '0';
				this->__print__(index - 1);
				break;
			}
		}
		if (index_str != "")
			std::cout << "Wrong index." << std::endl;
	}
}
