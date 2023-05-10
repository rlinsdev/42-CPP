/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:33:13 by rlins             #+#    #+#             */
/*   Updated: 2023/05/10 07:38:01 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(void) {
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	harl.complain("XPTO");

	return (0);
}
