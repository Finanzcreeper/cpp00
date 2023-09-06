
#include "phonebook.hpp"

void	print_str(std::string string)
{
	if (string.size() > 10)
		std::cout << std::setw(9) << string.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << string.substr(0,10);
}

void	show_contact(std::string input, PhoneBook book)
{
	int	index;

	if (input.length() == 1 && isdigit(input[0]))
	{
		index = input[0] - '0';
		index -= 1;
		if (book.contacts[index].get_first_name().empty())
			std::cout << "this contact is empty you fool!"<< std::endl;
		else if (index >= 0 && index < 8)
		{
			std::cout << book.contacts[index].get_first_name() << std::endl;
			std::cout << book.contacts[index].get_last_name() << std::endl;
			std::cout << book.contacts[index].get_nickname() << std::endl;
			std::cout << book.contacts[index].get_phone_number() << std::endl;
		}
		else
			std::cout << "Enter a valid number next try!" << std::endl;
	}
	else
		std::cout << "Enter a valid number next try!" << std::endl;
	std::cin.get();
}

int main(void)
{
	PhoneBook book;
	std::string input;
	int c = 0;
	int i = 0;
	while ( input != "EXIT")
	{
		std::cout << "\033[2J\033[1;1H";
		std::cout << "what do you want to do?" << std::endl;
		std::cout << "commands: (ADD, SEARCH, EXIT)" << std::endl;
		getline(std::cin, input);
		if (input == "ADD")
		{
			std::cout << "creating new Contact" << std::endl;
			std::cout << "enter first Name" << std::endl;
			book.contacts[c].set_first_name();
			std::cout << "enter last Name" << std::endl;
			book.contacts[c].set_last_name();
			std::cout << "enter Nickname" << std::endl;
			book.contacts[c].set_nickname();
			std::cout << "enter Phonenumber" << std::endl;
			book.contacts[c].set_phone_number();
			std::cout << "enter Darkest Secret" << std::endl;
			book.contacts[c].set_darkest_secret();
			if (c < 7)
				c++;
			else
				c = 0;
		}
		if (input == "SEARCH")
		{
			while (i < 8)
			{
				print_str(book.contacts[i].get_first_name());
				std::cout << "|";
				print_str(book.contacts[i].get_last_name());
				std::cout << "|";
				print_str(book.contacts[i].get_nickname());
				std::cout << "|";
				print_str(book.contacts[i].get_phone_number());
				std::cout << std::endl;
				i++;
			}
			std::cout << "select contact" << std::endl;
			getline(std::cin, input);
			show_contact(input, book);
			i = 0;
		}
	}
}


