/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:22:37 by rlins             #+#    #+#             */
/*   Updated: 2023/05/07 13:30:07 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Replace.hpp>

/**
 * @brief Constructor
 */
Replace::Replace(void) {
	return ;
}

/**
 * @brief Destructor
 */
Replace::~Replace(void) {
	return ;
}

std::string	Replace::ft_replace(std::string content, std::string s1, std::string s2) {
	if (s1.empty()) {
		return (content);
	}
	size_t index = content.find(s1);

	while (index != std::string::npos) {
		content.erase(index, s1.size());
		content.insert(index, s2);
		index = content.find(s1);
	}
	return (content);
}
