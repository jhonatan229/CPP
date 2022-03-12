#include "Contact.hpp"

Contact::Contact(int o_index, std::string o_first_name, std::string o_last_name, std::string o_nickname, std::string o_phone_number, std::string o_dark_secret)
{
	index = o_index;
	first_name = o_first_name;
	last_name = o_last_name;
	nickname = o_nickname;
	phone_number = o_phone_number;
	dark_secret = o_dark_secret;
}

Contact::Contact(){

}

std::string Contact::resize_str(std::string str)
{
	std::string resized;
	if(str.length() > 10){
		resized = str.substr(0, 10);
		resized[9] = '.';
		return resized;
	}
	return str;
}

void Contact::print_contact(){
	if (first_name[0] != '\0')
		std::cout << std::right << 
		"|" << std::setw(10) << index <<
		"|" << std::setw(10) << resize_str(first_name) << 
		"|" << std::setw(10) << resize_str(last_name) << 
		"|" << std::setw(10) << resize_str(nickname) << "|" << std::endl;
}

int Contact::print_contact(int index_to_find){
	if (index_to_find == index && first_name[0] != '\0'){
		std::cout << "Index:       " << index << std::endl <<
		"First Name:     " << first_name << std::endl <<
		"Last Name:      " << last_name << std::endl <<
		"Nickname:       " << nickname << std::endl <<
		"Phone Number:   " << phone_number << std::endl <<
		"Darkest Secret: " << dark_secret << std::endl;
		return 1;
	}
	return 0;
}
