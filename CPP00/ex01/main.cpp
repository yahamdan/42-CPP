#include "Phonebook.hpp"

std::string	get_info(std::string str)
{
	std::string s;

	std::cout << str;
	std::getline(std::cin, s);
	if (std::cin.eof())
		exit (1);
	return (s);
}

bool	checkIfDigits(std::string st)
{
	int i = 0;
	while (i < (int )st.size())
	{
		if (!std::isdigit(st[i++]))
			return (true);
	}
	return (false);
}

void	contact_inf(std::string inp[])
{
	std::string s;

	while (1){
		s = get_info("FirstName: ");
		if (s.empty())
			std::cout << "Invalid input, Please try again.\n";
		else{
			inp[0] = s; break;
		}
	}
	while (1){
		s = get_info("LastName: ");
		if (s.empty())
			std::cout << "Invalid input, Please try again.\n";
		else{
			inp[1] = s; break;
		}
	}
	while (1){	
		s = get_info("NicktName: ");
		if (s.empty())
			std::cout << "Invalid input, Please try again.\n";
		else{
			inp[2] = s; break;
		}
	}
	while (1){
		s = get_info("PhoneNumber: ");
		if (s.empty() || checkIfDigits(s))
			std::cout << "Invalid input, Please try again.\n";
		else{
			inp[3] = s; break;
		}
	}
	while (1){
		s = get_info("DarkestSecre: ");
		if (s.empty())
			std::cout << "Invalid input, Please try again.\n";
		else{
			inp[4] = s; break;
		}
	}
}

void	Add(Phonebook *Phonebook, int *indx, std::string inp[], int *n)
{
	if(*indx > 7)
		*indx = 7;
	if (*n > 7)
		*n = 0;
	contact_inf(inp);
	Phonebook->contact(inp, *n);
}

int main()
{
	int indx;
	int hn;
	Phonebook Phonebook;
	std::string str;
	std::string inp[5];

	indx = -1;
	hn = -1;
	while(1)
	{
		std::cout << "Please, enter your command : ";
		std::getline(std::cin, str);
        if (std::cin.eof())
            return (1);
		if(str == "SEARCH")
		{
			Phonebook.search(indx);
			std::cin.ignore();
		}
		else if (str == "ADD")
		{
			indx++;
			hn++;
			Add(&Phonebook, &indx, inp, &hn);
		}
        else if(str == "EXIT")
            return (0);
		else
			std::cerr << "Invalid command." << std::endl;
	}
}
