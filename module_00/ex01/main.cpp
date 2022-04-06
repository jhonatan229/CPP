#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>

int main(void)
{
	std::string awnser;
	PhoneBook 	phone;
	std::string	find_index;
	int 		index = 1;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string dark_secret;
	do
	{
		awnser.clear();
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
			dark_secret.clear();
			std::cout << "DONE!!" << std::endl;
		}
		else if(awnser.compare("SEARCH") == 0){
			phone.print_contacts();
			std::cout << "Give the index you want: ";
			while(find_index.empty())
				getline(std::cin, find_index); 
			phone.print_contact_by_index(atoi(find_index.c_str()));
			find_index.clear();
		}
		else {
			std::cout << "Wrong command.\n";
		}
	} while (awnser.compare("EXIT") != 0);
	return (0);
}