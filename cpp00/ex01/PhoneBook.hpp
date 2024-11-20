#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);

		void	addContact(void);
		void	searchContact(void);
		void	displayAll(void);
		void	displayOne(int index);

	private:
		void		createPhoneBook(void);
		int			_index;
		Contact		_contacts[8];
};

#endif