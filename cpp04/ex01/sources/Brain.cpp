/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:11:09 by rlins             #+#    #+#             */
/*   Updated: 2023/06/11 17:35:11 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>
#include <Color.hpp>
#include <string>
#include <iostream>

/**
 * @brief Default Constructor
 */
Brain::Brain(void) {
	std::cout << CYAN "Brain constructor Called" RESET << std::endl;
	return ;
}

/**
 * @brief Copy constructor
 */
Brain::Brain(Brain const & src) {
	std::cout << CYAN "Brain - Copy constructor called." RESET << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destructor
 */
Brain::~Brain(void) {
	std::cout << BRIGHT_RED "Brain - Destructor called." RESET << std::endl;
	return ;
}

/**
 * @brief Copy assignment operator
 */
Brain & Brain::operator=(Brain const & src) {
	if (this != &src) {
		for (int i = 0 ; i < BRAIN_SIZE ; i++)
			this -> _ideas[i] = src._ideas[i];
	}
	return (*this);
}

/**
 * @brief
 *
 * @param index
 * @return std::string const&
 */
std::string	Brain::getIdea ( int index ) const {
	if (index < 0 || index >= BRAIN_SIZE) {
		return ("");
	}
	return (this->_ideas[index]);
}

/**
 * @brief
 *
 * @param index
 * @param idea
 */
void	Brain::setIdea(int index, std::string const & idea) {
	if (index >= 0 && index < BRAIN_SIZE)
		this ->_ideas[index] = idea;
	return ;
}
