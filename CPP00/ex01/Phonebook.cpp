#include "Phonebook.hpp"

void	Phonebook::contact(std::string inp[], int index)
{
	Contact[index].fill_Contact(inp, index);
}

void	Phonebook::search(int indx)
{
	std::string j;

	std::cout << "\n     Index|first name| last name|  nickname" << std::endl;
	for(int i = 0; i <= indx ; i++)
		Contact[i].search_in();
	std::cout << "enter the index: ";
	std::cin >> j;
	if (j.length() == 1 && atoi(j.c_str()) <= indx && std::isdigit(j[0]))
		Contact[atoi(j.c_str())].display();
	else
		std::cout << "Wrong index !" << std::endl;
}
