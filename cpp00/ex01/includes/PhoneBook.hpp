/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:01:55 by rlins             #+#    #+#             */
/*   Updated: 2023/04/27 08:14:26 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <Contact.hpp>

class PhoneBook {
	private:
		int		_index;
		Contact	_contactList[8];

		void	indexHandler(void);
		void	displayAllContact(void);
		void	displaySingleContact(std::string input);
		void	truncate(std::string str);
		void	headerContacts(void);

		bool	validInput(std::string input, const std::string allowedChar, long unsigned int minLength);
		bool	isValidField(std::string input, bool justNumber);
		bool	isValidIndexDetail(std::string input);

		void	handleFirstName(void);
		void	handleLastName(void);
		void	handleNickName(void);
		void	handlePhoneNumber(void);
		void	handleDarkestSecret(void);

		void	handleDetailContact(void);

	public:
		/*Constructor and destructor*/
		PhoneBook(void);
		~PhoneBook(void);

		void	menu(bool firstTime);
		void	farewell();

		void	addContact(void);
		void	searchContact(void);
};

#endif



