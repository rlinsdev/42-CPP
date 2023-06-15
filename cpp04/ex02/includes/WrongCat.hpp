/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:35:12 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 12:37:56 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef W_CAT_H
# define W_CAT_H

# include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal {
	public:
		// Constructor and destructor
		WrongCat(void);
		WrongCat(WrongCat const & src);
		~WrongCat(void);

		// Operator by Orthodox Canonical Form
		WrongCat &	operator=(WrongCat const & src);

		// Public members from subject
		void	makeSound(void) const;
};

#endif
