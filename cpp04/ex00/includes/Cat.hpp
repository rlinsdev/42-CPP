/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:42:57 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 11:43:49 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <Animal.hpp>

class Cat : public Animal {
	public:
		// Constructor and destructor
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		// Operator by Orthodox Canonical Form
		Cat &	operator=(Cat const & src);

		// Public members from subject
		void	makeSound(void) const;
};

#endif
