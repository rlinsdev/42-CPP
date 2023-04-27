/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:31:19 by rlins             #+#    #+#             */
/*   Updated: 2023/04/27 17:05:53 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 	// std::cout

int main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		std::string word(argv[i]);
		for (std::string::iterator it = word.begin(); it != word.end(); it++) {
			*it = std::toupper(*it);
		}
		std::cout << word;
		if (i + 1 < argc) {
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
