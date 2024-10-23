/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussato <yussato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:01:55 by yussato           #+#    #+#             */
/*   Updated: 2024/10/23 21:36:12 by yussato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact __contacts__[8];
		int __index__;
		void __print__(int index);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add(void);
		void search(void);
};

#endif
