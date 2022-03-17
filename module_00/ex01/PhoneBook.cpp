#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	total = 0;
	oldest_index = 0;
}

void PhoneBook::add_contact(Contact new_contact)
{
	if (total < 8)
		total++;
	if(oldest_index == 8)
		oldest_index = 0;
	contacts[oldest_index] = new_contact;
	oldest_index++;
}

void PhoneBook::print_contacts(){
	int i = 0;
	while (i < total)
		contacts[i++].print_contact();
}

void PhoneBook::print_contact_by_index(int to_find){
	int result = 0;
	int	index = 0;
	while (index < total)
		result += contacts[index++].print_contact(to_find);
	if(result == 0)
		std::cout << "Contact doesn't exist!" << std::endl;
}