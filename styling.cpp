#include <iostream>
#include "styling.h"

std::string removeLeadingSpaces(std::string str)
{
    std::string output = "";
    int sl = str.length();
    int ns = 0; // ns stands for No Space
    for (int i = 0; i != sl; i++)
    {
        if (str[i] != ' ')
        {
        ns = i;
        break;
        }
    }

    for (int j = ns; j != sl; j++)
    {
        output += str[j];
    }

    return output;


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