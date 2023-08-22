#ifndef CONTACTBOOK
#define CONTACTBOOK

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class Contact
{
	public:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

class PhoneBook
{
	public:

	Contact contacts[8];
};

#endif
