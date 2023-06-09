/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:36:27 by rlins             #+#    #+#             */
/*   Updated: 2023/04/27 07:22:57 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <PhoneBook.hpp>

int	main(void) {
	PhoneBook pBook;
	bool firstTime = true;

	std::string value;
	while (true) {
		pBook.menu(firstTime);
		firstTime = false;
		std::cout << "> ";
		getline(std::cin, value);

		if (value == "1" || value == "ADD") {
			pBook.addContact();
		} else if (value == "2" || value == "SEARCH") {
			pBook.searchContact();
		} else if (value == "3" || value == "EXIT") {
			break ;
		} else {
			std::cout << "Invalid Choice. Try again" << std::endl;
		}
	}
	pBook.farewell();
	return (0);
}
