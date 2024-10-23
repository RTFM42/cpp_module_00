/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussato <yussato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:30:36 by yussato           #+#    #+#             */
/*   Updated: 2024/10/23 20:42:17 by yussato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int n;
	int i;

	n = -1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (1 < ac && av && av[++n])
	{
		i = 0;
		while (n > 0 && av[n][i])
			std::cout << (char)std::toupper(av[n][i++]);
	}
	std::cout << std::endl;
	return (0);
}
