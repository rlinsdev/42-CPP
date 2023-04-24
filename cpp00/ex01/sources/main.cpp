/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:36:27 by rlins             #+#    #+#             */
/*   Updated: 2023/04/24 12:44:45 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <PhoneBook.hpp>

int	main(void)
{
	// std::cout << "opa" << std::endl;
	PhoneBook pBook;
	pBook.menu();

	std::string value;
	while (true)
	{
		std::cout << "> ";
		getline(std::cin, value);

		if (value == "1" || value = "ADD")
		{
			std::cout << "1" << std::endl;
		}
		else if (value == "2" || value == "SEARCH")
		{
			std::cout << "2" << std::endl;
		}
		else if (value == "3" || value == "EXIT")
		{
			break ;
		}
		else
		{
			std::cout << "Invalid Choice. Try again" << std::endl;
		}
	}
	std::cout << "|------------------------------------------|" << std::endl;
	std::cout << "|-------- Welcome to PhoneBook(42) --------|" << std::endl;
	std::cout << "|----------- Choose one option: -----------|" << std::endl;
	std::cout << "|------------------------------------------|" << std::endl;
	return (0);
}
