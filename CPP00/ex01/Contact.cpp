#include "Contact.hpp"

void	Contact::fill_Contact(std::string inp[], int index)
{
	id = index;
	FirstName = inp[0];
	LastName = inp[1];
	NickName = inp[2];
	PhoneNumber = inp[3];
	Secret = inp[4];
}

void	Contact::firstname(std::string st)
{
	FirstName = st;
}

void	Contact::lastname(std::string st)
{
	LastName = st;	
}

void	Contact::nickname(std::string st)
{
	NickName = st;	
}

void	Contact::phoneNumber(std::string st)
{
	PhoneNumber = st;
}

void	Contact::secret(std::string st)
{
	Secret = st;
}

void Contact::search_in()
{
	std::cout << std::setw(10) << std::right;
	std::cout << id << "|";
	std::cout << std::setw(10) << std::right;
	if (FirstName.length() > 10)
		std::cout << FirstName.substr(0, 9) + "." << "|";
	else
		std::cout << FirstName << "|";
	std::cout << std::setw(10) << std::right;
	if (LastName.length() > 10)
		std::cout << LastName.substr(0, 9) + "." << "|";
	else
		std::cout << LastName << "|";
	std::cout << std::setw(10) << std::right;
	if (NickName.length() > 10)
		std::cout << NickName.substr(0, 9) + "." << std::endl;
	else
		std::cout << NickName << std::endl;
}

void	Contact::display()
{
	std::cout << "\nFirst Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "NickName: " << NickName << std::endl;
	std::cout << "Phone Number: " << PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << Secret + "\n" << std::endl;
}