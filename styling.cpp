#include <iostream>
#include "styling.h"

std::string removeLeadingSpaces(std::string line)
{
    std::string result;
    
    int i = 0;
    if(isspace(line[i]))
    {
        while (isspace(line[i]))
        {
            i++;
        }
    }
    
    result = line.substr(i);
    return result;
}

