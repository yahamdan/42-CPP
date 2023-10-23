#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private :
	int id;
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string Secret;
public :
	void	fill_Contact(std::string inp[], int index);
	void	firstname(std::string st);
	void	lastname(std::string st);
	void	nickname(std::string st);
	void	phoneNumber(std::string st);
	void	secret(std::string st);
	void	search_in();
	void	display();
};

#endif