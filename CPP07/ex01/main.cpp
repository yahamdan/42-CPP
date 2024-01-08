
#include "Iter.hpp"


template <typename T>
void f( T &b ){
    
    std::cout << b << std::endl;
}

int main( void ) {
    
    const int arr[3] = { 1 , 2 , 3};
    
    Iter(arr, 3, f<int>);
}