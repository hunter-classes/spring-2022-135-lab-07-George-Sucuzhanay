#include <iostream>
#include <string>
#include <fstream>
#include "styling.h"

int main()
{
    std::string line;
  
    std::ifstream fin("awful-code.cpp");

    // Task A: Removing indentation
    std::cout << "Task A: Removing indentation\n\n";

    while(getline(fin,line))
    {
        std::string styledWithIndentation = removeLeadingSpaces(line);
        std::cout << styledWithIndentation << std::endl;
    }
    fin.close();
    std::cout << "\n------------------\n"; // seperator


    // Task B:  Counting blocks opened and closed by { and }, and adding real indentation

    

    return 0;
}