#include <iostream>
#include <fstream>


std::string    replaceString( std::string line, std::string s1, std::string s2 )
{
    std::string newLine = line;
    std::size_t found = line.find(s1);
    while (found !=std::string::npos)
    {
        newLine = newLine.substr(0, found) + s2 + newLine.substr(found + s1.length());
        found = newLine.find(s1, found + s2.length());
    }
    return (newLine);
}

int main( int ac, char **av )
{
    if (ac == 4 && av[2][0])
    {
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string file = av[1];
        std::ifstream inFile(av[1]);
        std::string line;

        file = file + ".replace";
        if (inFile.is_open())
        {
            std::ofstream outFile(file.c_str());
            if (inFile.is_open())
            {
                while(std::getline(inFile, line))
                {
                    if (line.find(s1) !=std::string::npos)
                        line = replaceString(line, s1, s2);
                    outFile << line;
                    if (!inFile.eof())
                        outFile << std::endl;
                }
            }
            else
                std::cerr << "Failed to Create file" << std::endl;
        }
        else
            std::cerr << "Failed to open file." << std::endl;
    }
    else
        std::cerr << "Invalid parameters." << std::endl;
} 
