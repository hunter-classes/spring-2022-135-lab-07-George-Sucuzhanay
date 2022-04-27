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

int countChar(std::string line, char c)
{
    int count = 0;
    int index = -1;
    while(line[++index])
    {
        if(line[index] == c)
        {
            count += 1;
        }
        else
        {
            count += 0;
        }
    }
    return count;
}

std::string properIndent(std::string line, int out, int in)
{
    std::string result = "";
    for(int i = 0; i < out -in; i++)
    {
        result += "\t";
    }
    return result + line;
}