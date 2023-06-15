/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:42:57 by rlins             #+#    #+#             */
/*   Updated: 2023/06/15 07:44:36 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <AAnimal.hpp>
# include <Brain.hpp>

class Cat : public AAnimal {
	public:
		// Constructor and destructor
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		// Operator by Orthodox Canonical Form
		Cat &	operator=(Cat const & src);

		// Public members from subject
		Brain 	*getBrain(void) const;
		void	makeSound(void) const;

	private:
		Brain *brain;
};

#endif
