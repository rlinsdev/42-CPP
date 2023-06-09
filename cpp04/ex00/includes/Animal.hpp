/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:38:34 by rlins             #+#    #+#             */
/*   Updated: 2023/06/09 08:38:48 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>

class Animal {
	public:
		// Constructor and destructor
		Animal(void);
		Animal(Animal const & src);
		Animal(std::string type);
		~Animal(void);

		// Operator by Orthodox Canonical Form
		Animal &	operator=(Animal const & src);

		// Getters and setters
		std::string		getType(void) const;

		// Public members from subject
		virtual void	makeSound(void);

	protected:
		std::string	_type;
};

#endif
