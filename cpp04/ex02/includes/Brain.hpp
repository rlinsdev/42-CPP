/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:51:41 by rlins             #+#    #+#             */
/*   Updated: 2023/06/14 06:50:17 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>

# define BRAIN_SIZE	100

class Brain {
	public:
		// Constructor and destructor
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);

		// Operator by Orthodox Canonical Form
		Brain &	operator=(Brain const & src);

		std::string	getIdea (int index) const;
		void		setIdea(int index, std::string const &idea);

		private:
			std::string	_ideas[BRAIN_SIZE];
};

#endif
