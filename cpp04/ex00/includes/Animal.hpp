/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 07:38:34 by rlins             #+#    #+#             */
/*   Updated: 2023/06/10 07:52:53 by rlins            ###   ########.fr       */
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
		Animal(std::string const & type);
		virtual ~Animal(void); // TODO: Virtual

		// Operator by Orthodox Canonical Form
		Animal &	operator=(Animal const & src);

		// Getters and setters
		std::string		getType(void) const;

		// Public members from subject
		virtual void	makeSound(void) const; // TODO: Virtual

	protected:
		std::string	_type;
};

#endif
