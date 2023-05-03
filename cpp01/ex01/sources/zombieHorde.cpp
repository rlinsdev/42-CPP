/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:14:36 by rlins             #+#    #+#             */
/*   Updated: 2023/05/03 12:19:27 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	if (N < 1) {
		return (NULL);
	}

	Zombie *zHorde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zHorde[i].setName(name);
	}
	return (zHorde);
}
