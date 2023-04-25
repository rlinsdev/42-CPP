/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:01:55 by rlins             #+#    #+#             */
/*   Updated: 2023/04/25 08:34:10 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook
{
	private:
		/* data */
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



