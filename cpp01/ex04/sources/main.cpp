/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:33:13 by rlins             #+#    #+#             */
/*   Updated: 2023/05/07 13:17:39 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <string.h>
#include <iostream>
#include <fstream>

void	msgUsage(void);

int main(int argc, char **argv) {

	if (argc != 4) {
		msgUsage();
		return (1);
	}

	std::cout << argv[0] << std::endl;

	return (0);
}

/**
 * @brief Return message when wrong usage
 */
void	msgUsage(void) {
	std::cout << "Wrong param. Right usage: <file-name> <old-str> <new-str>" << std::endl;
}
