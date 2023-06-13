/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 07:07:16 by rlins             #+#    #+#             */
/*   Updated: 2023/06/13 07:25:46 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <Animal.hpp>
# include <Brain.hpp>

class Dog : public Animal {
	public:
		// Constructor and destructor
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		// Operator by Orthodox Canonical Form
		Dog &	operator=(Dog const & src);

		// Public members from subject
		void	makeSound(void) const;

	private:
		Brain *brain;
};

#endif
