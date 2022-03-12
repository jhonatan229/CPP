#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	int index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string dark_secret;
	std::string resize_str(std::string str);
public:
	Contact(int o_index, std::string o_first_name, std::string o_last_name, std::string o_nickname, std::string o_phone_number, std::string o_dark_secret);
	Contact();
	void print_contact();
	int print_contact(int index_to_find);
};

#endif