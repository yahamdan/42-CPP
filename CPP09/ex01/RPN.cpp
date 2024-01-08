
#include "RPN.hpp"
#include <vector>

int RPN( std::string str)
{
    std::stack<int> stack;
    int fn, sn , result;
    std::set<char> tokens;
    tokens.insert('+');
    tokens.insert('-');
    tokens.insert('*');
    tokens.insert('/');

    for ( size_t i = 0 ; i < str.length() ; i++  ){
        
        if ( tokens.find( str[i] ) != tokens.end()){
            
            if ( stack.size() >= 2 ){
                
                sn = stack.top();
                stack.pop();
                fn = stack.top();
                stack.pop();
                switch ( str[i] )
                {
                case '+':
                    result = fn + sn;
                    break;
                case '-':
                    result = fn - sn;
                    break;
                case '/':
                    if ( sn == 0)
                        throw std::invalid_argument("Error");
                    result = fn / sn;
                    break;
                case '*':
                    result = fn * sn;
                    break;
                }
                stack.push( result );
            }
            else
                throw std::invalid_argument("Error");
        }
        else if ( str[i] == ' ' )
            continue;
        else if ( str[i] - '0' >= 0 && str[i] - '0' <= 9 && str[i + 1] == ' ')
            stack.push(str[i] - '0');
        else
            throw std::invalid_argument("Error 1");
    }
    if (stack.size() != 1)
        throw std::invalid_argument("Error");
    return stack.top();
}