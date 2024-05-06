#include <iostream>
#if BADCODE
    #include "badcode.h"
#else
    #include "goodcode.h"
#endif

int main()
{
#if BADCODE
    std::cout << "BADCODE EXEC" << std::endl;
#else 
    std::cout << "GOODCODE EXEC" << std::endl;
#endif
    // Goodcode or Badcode.hに定義されたものを呼び出す
    Person kevin;
    std::string talk = kevin.Talk();
    std::cout << talk << std::endl;
}