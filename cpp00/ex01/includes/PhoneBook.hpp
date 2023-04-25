/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:01:55 by rlins             #+#    #+#             */
/*   Updated: 2023/04/25 11:01:03 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <Contact.hpp>

class PhoneBook
{
	private:
		int		_index;
		Contact	_contactList[8];

		void	indexHandler(void);
		void	displayAllContact(void);
		void	displaySingleContact(std::string input);
		void	truncate(std::string str);
		void	headerContacts(void);


	public:
		/*Constructor and destructor*/
		PhoneBook();
		~PhoneBook();

		/*TODO: Tem q ser publico mesmo?*/
		void	menu();
		void	farewell();

		void	addContact(void);
		void	searchContact(void);
};

#endif



