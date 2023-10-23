#ifndef PHONEBOOK_HPP
#define PHONEBOKK_HPP

#include <cstdlib>
#include "Contact.hpp"

class Phonebook
{
private:
    class Contact Contact[8];
public:
   void contact(std::string inp[], int indx);
   void	search(int indx);
};

void	contact_inf(std::string inp[]);

#endif