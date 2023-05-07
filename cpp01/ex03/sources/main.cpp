/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 06:55:30 by rlins             #+#    #+#             */
/*   Updated: 2023/05/07 09:05:30 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <Weapon.hpp>
# include <HumanA.hpp>
# include <HumanB.hpp>

int	main(void) {

		std::cout << "------------ Human A ------------" << std::endl;
		// Human A attack:
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();

		// Human B attack:
		std::cout << std::endl << "------------ Human B ------------" << std::endl;
		Weapon club2 = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club2);
		jim.attack();
		club2.setType("some other type of club");
		jim.attack();

	return (0);
}
