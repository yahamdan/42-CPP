
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& other ){ *this = other; }


BitcoinExchange& BitcoinExchange::operator= ( const BitcoinExchange& other )
{
    (void) other;
    return *this;
}

void BitcoinExchange::Mapping( std::ifstream& file )
{
    std::string key;
    std::string line;
    std::string sval;
    float val;

    std::getline( file , line );
    while(std::getline( file , line ))
    {
        int found = line.find(',');
        key = line.substr( 0 , found );
        sval = line.substr( found + 1 , line.length() );
        val = atof( sval.c_str() );
        data[key] = val;
    }
}

void  BitcoinExchange::Exchange( std::ifstream& file )
{
    std::string line;
    std::map<std::string , float>::iterator it;
    bool f = false;

    while(std::getline( file , line ))
    {
        if ( line == "date | value" && !f){
            f = true;
            continue;
        }
        else if ( line != "date | value" && !f ){
            std::cout << "Error: bad iput" << std::endl;
            break;
        }
        try{
            Pars( line );
            it = data.upper_bound(key);
            it--;
            std::cout << key << " => " << v << " = " << v * (it)->second << std::endl;
        }
        catch( std::exception & e )
        {
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
}

int    check( std::string line )
{
    int f = line.find("|");
    std::string l1 = line.substr( 0 , f );
    struct std::tm date;
    int day;
    
    for (size_t i = 0 ; i < line.length() ; i++ ){
        if ( !isdigit(line[i]) && line[i] != '-' && line[i] != '.' && line[i] != ' ' && line[i] != '|')
            return 1;
    }
    
    day = atof(line.substr(line.find_last_of('-') + 1).c_str());
    if ( day < 1 || day > 31 || !strptime( l1.c_str(), "%Y-%m-%d ", &date) || date.tm_year + 1900 < 2009)
        return 1;
    
    if ( line[f - 1] != ' ' || line[f + 1] != ' ' || l1.length() != 11 || std::count(l1.begin(), l1.end(), '-') != 2)
        return 1;

    return 0;
}


void BitcoinExchange::Pars( std::string line )
{
    std::size_t f = line.find("|");
    std::string l1 = line.substr( 0 , f );
    std::string l2 = line.substr( f + 1 , line.length() );
    double val;

    val = atof( l2.c_str() );

    if ( check(line) || std::count(line.begin(), line.end(), '|') > 1 )
        throw std::invalid_argument("invalid format.");
    if ( std::count(line.begin(), line.end(), ' ') != 2 )
        throw std::invalid_argument("bad input.");
    if (*(l2.begin() + 1) == '.' || *(l2.end() - 1) == '.')
        throw std::invalid_argument("bad input.");
    if ( val < 0 )
        throw std::invalid_argument("not a positive number.");
    if ( val > 1000)
        throw std::invalid_argument("number too large.");
    key = l1;
    v = val;
}

BitcoinExchange::~BitcoinExchange(){}
