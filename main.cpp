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

    fin.open("awful-code.cpp");
    std::cout << "Task B: Counting blocks of { and } with real indentation \n\n";

    int outBrace = 0;
    int insideBrace = 0;
    while(getline(fin,line))
    {
        insideBrace = countChar(line, '}') + insideBrace;
        std::string styledWithIndentation = removeLeadingSpaces(line);
        std::cout << properIndent(styledWithIndentation, outBrace, insideBrace) << std::endl;
        outBrace = countChar(line, '{') + outBrace;


    }
    fin.close();
    std::cout << "\n------------------\n"; // seperator
    fin.open("awful-code_2.cpp");
    std::cout << "Task C: Testing function for branch" << std::endl;
    outBrace = 0;
    insideBrace = 0;
    while(getline(fin,line))
    {
        insideBrace = countChar(line, '}') + insideBrace;
        std::string styledWithIndentation = removeLeadingSpaces(line);
        std::cout << properIndent(styledWithIndentation, outBrace, insideBrace) << std::endl;
        outBrace = countChar(line, '{') + outBrace;
    }
    fin.close();

    return 0;
}