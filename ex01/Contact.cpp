/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussato <yussato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:11:02 by yussato           #+#    #+#             */
/*   Updated: 2024/10/23 21:12:44 by yussato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::getFname(void) const
{
	return (this->__fname__);
}

std::string	Contact::getLname(void) const
{
	return (this->__lname__);
}

std::string	Contact::getNname(void) const
{
	return (this->__nname__);
}

std::string	Contact::getPhone(void) const
{
	return (this->__phone__);
}

std::string	Contact::getSecret(void) const
{
	return (this->__secret__);
}

void	Contact::setFname(std::string fname)
{
	this->__fname__ = fname;
}

void	Contact::setLname(std::string lname)
{
	this->__lname__ = lname;
}

void	Contact::setNname(std::string nname)
{
	this->__nname__ = nname;
}

void	Contact::setPhone(std::string phone)
{
	this->__phone__ = phone;
}

void	Contact::setSecret(std::string secret)
{
	this->__secret__ = secret;
}
