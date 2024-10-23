/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussato <yussato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:06:21 by yussato           #+#    #+#             */
/*   Updated: 2024/10/23 22:27:57 by yussato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string	__fname__;
		std::string	__lname__;
		std::string	__nname__;
		std::string	__phone__;
		std::string	__secret__;
	public:
		Contact(void);
		~Contact(void);
        std::string getFname(void) const;
        std::string	getLname(void) const;
		std::string	getNname(void) const;
		std::string	getPhone(void) const;
		std::string	getSecret(void) const;
		void		setFname(std::string fname);
		void		setLname(std::string lname);
		void		setNname(std::string nname);
		void		setPhone(std::string phone);
		void		setSecret(std::string secret);
};

#endif
