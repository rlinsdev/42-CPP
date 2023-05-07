/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:18:46 by rlins             #+#    #+#             */
/*   Updated: 2023/05/07 13:22:06 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_CLASS_H
# define REPLACE_CLASS_H

# include <string>
#include <iostream>
#include <fstream>

class Replace {
	private:

	public:
		Replace(void);
		~Replace(void);

		std::string	ft_replace(std::string content, std::string s1, std::string s2);
	};

#endif
