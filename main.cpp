#include <iostream>
#include <string>
#include "styling.h"

int main()
{
    std::string result;
    result = removeLeadingSpaces("       int x = 1;  ");
    std::cout << "removeLeadingSpaces(       int x = 1;  )\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator
    
    return 0;
}