/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:19:23 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 12:50:28 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef W_ANIMAL_H
# define W_ANIMAL_H

# include <string>

class WrongAnimal {
	public:
		// Constructor and destructor
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal(std::string const & type);
		virtual ~WrongAnimal(void);

		// Operator by Orthodox Canonical Form
		WrongAnimal &	operator=(WrongAnimal const & src);

		// Getters and setters
		std::string		getType(void) const;

		// Public members from subject
		void	makeSound(void) const; // No Virtual. Trick. Pay attention!
		// virtual void	makeSound(void) const; // Will call derived class
	protected:
		std::string	_type;
};

#endif
