#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	oldest_index = 0;
}

void PhoneBook::add_contact(Contact new_contact)
{
	if(oldest_index == 8)
		oldest_index = 0;
	contacts[oldest_index] = new_contact;
	oldest_index++;
}

void PhoneBook::print_contacts(){
	for(Contact contact : contacts)
		contact.print_contact();
}

void PhoneBook::print_contact_by_index(int to_find){
	int result = 0;
	for(Contact contact : contacts)
		result += contact.print_contact(to_find);
	if(result == 0)
		std::cout << "Contact doesn't exist!" << std::endl;
}