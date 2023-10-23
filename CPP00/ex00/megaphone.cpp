#include <iostream>

int main(int ac, char **av){

	int i = 1, j = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		std::string str;
		for(i = 1; i < ac; i++){
			j = 0;
			while (av[i][j]){
				str.push_back(toupper(av[i][j]));
				j++;
			}
		}
		std::cout << str << std::endl;
	}
}
