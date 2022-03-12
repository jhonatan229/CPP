#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int main(void)
{
	std::string awnser;
	PhoneBook 	phone;
	int			find_index;
	int 		index = 1;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string dark_secret;
	do
	{
		std::cin >> awnser;
		if(awnser.compare("ADD") == 0){
			std::cout << "First name: ";
			std::cin >> first_name;
			std::cout << "Last name: ";
			std::cin >> last_name;
			std::cout << "Nickname: ";
			std::cin >> nickname;
			std::cout << "Phone Number: ";
			std::cin >> phone_number;
			std::cout << "Darkest secret: ";
			while(dark_secret[0] == '\0')
				getline(std::cin, dark_secret); 
			Contact contact(index++ ,first_name, last_name, nickname, phone_number, dark_secret);
			phone.add_contact(contact);
			std::cout << "DONE!!" << std::endl;
		}
		if(awnser.compare("SEARCH") == 0){
			phone.print_contacts();
			std::cout << "Give the index you want: ";
			std::cin >> find_index;
			phone.print_contact_by_index(find_index);
		}
	} while (awnser.compare("EXIT") != 0);
}