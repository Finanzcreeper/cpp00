#include "contact.hpp"

void	fill_space(std::string &string)
{
	std::string	input;
	
	getline(std::cin, input);
	while (input.empty() == true)
	{
		std::cout << "Input cant be empty" << std::endl;
		getline(std::cin, input);
	}
	string = input;
}

std::string Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

void Contact::set_first_name()
{
	fill_space(this->first_name);
}

void Contact::set_last_name()
{
	fill_space(this->last_name);
}

void Contact::set_nickname()
{
	fill_space(this->nickname);
}

void Contact::set_phone_number()
{
	fill_space(this->phone_number);
}

void Contact::set_darkest_secret()
{
	fill_space(this->darkest_secret);
}

