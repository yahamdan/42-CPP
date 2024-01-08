
#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <map>

class BitcoinExchange
{
private:
    std::map<std::string , float> data;
    std::string key;
    float v;
public :
    BitcoinExchange();
    BitcoinExchange( const BitcoinExchange& other );
    BitcoinExchange& operator= ( const BitcoinExchange& other );
    
    void Mapping( std::ifstream& file);
    void Exchange( std::ifstream& file );
    void Pars( std::string line );

   ~BitcoinExchange();
};