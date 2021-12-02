#include <iostream>
#include <istream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream myfile;
    myfile.open("input.txt");
    std::string line;
    int depth = 0;
    int horz = 0;
   
    while (std::getline(myfile, line)) 
    {
        int number = 0;
        char last = line.back();
        number = last - 48;
        // std::cout << line << "\n";
        if(line.rfind("d", 0) == 0)
        {
            depth += number;
        }
        if(line.rfind("f", 0) == 0)
        {
            horz += number;
        }
        if(line.rfind("u", 0) == 0)
        {
            depth -= number;
        }
    }
    std::cout << "depth: " << depth << "   horizontal: " << horz;
    myfile.close();
}