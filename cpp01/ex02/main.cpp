/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:33:13 by rlins             #+#    #+#             */
/*   Updated: 2023/05/04 08:48:14 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {

	std::string const	str = "HI THIS IS BRAIN";
	std::string const	*stringPTR = &str;
	std::string const	&stringREF = str;

	std::cout << "Memory address:" << std::endl;
	std::cout << "\tVar str:\t" << &str << std::endl;
	std::cout << "\tVar stringPTR:\t" << stringPTR << std::endl;
	std::cout << "\tVar stringREF:\t" << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "Value of Vars:" << std::endl;
	std::cout << "\tVar str:\t" << str << std::endl;
	std::cout << "\tVar stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "\tVar stringREF:\t" << stringREF << std::endl;
	std::cout << std::endl;

	return (0);
}
