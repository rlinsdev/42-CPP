#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string	_firstName;

	public:
		Contact();
		~Contact();

		std::string const	getFirstName(void) const;
		bool				setFirstName(std::string str);
};

#endif
