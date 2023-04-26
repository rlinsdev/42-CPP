/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 08:41:15 by rlins             #+#    #+#             */
/*   Updated: 2023/04/26 08:41:16 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string	_firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact();
		~Contact();

		const std::string	getLastName(void) const;
		const std::string	getNickName(void) const;
		const std::string	getFirstName(void) const;
		const std::string	getPhoneNumber(void) const;
		const std::string	getDarkestSecret(void) const;

		void	setFirstName(const std::string firstName);
		void	setLastName(const std::string lastName);
		void	setNickName(const std::string nickName);
		void	setPhoneNumber(const std::string phoneNumber);
		void	setDarkestSecret(const std::string darkestSecret);

		bool		hasValue(void);
};

#endif
