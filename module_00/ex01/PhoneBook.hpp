#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int		oldest_index;
public:
	PhoneBook();
	void add_contact(Contact new_contact);
	void print_contacts();
	void print_contact_by_index(int to_find);
};
#endif