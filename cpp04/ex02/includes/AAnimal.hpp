/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 07:28:14 by rlins             #+#    #+#             */
/*   Updated: 2023/06/15 08:13:37 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

# include <string>

class AAnimal {
	public:
		// Constructor and destructor
		AAnimal(void);
		AAnimal(AAnimal const & src);
		AAnimal(std::string const & type);
		virtual ~AAnimal(void);

		// Operator by Orthodox Canonical Form
		AAnimal &	operator=(AAnimal const & src);

		// Getters and setters
		std::string		getType(void) const;

		// Public members from subject
		virtual void	makeSound(void) const = 0;

	protected:
		std::string	_type; // Attribute _type
};

#endif
