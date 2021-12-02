#include <iostream>
#include <istream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream myfile;
    myfile.open("input.txt");
    std::string line;
    
    int number = 0;
    int prevnum = 0;
    int count  = 0;
    std::getline(myfile, line);
    prevnum = std::stoi(line);
    while (std::getline(myfile, line)) 
    {
        number = std::stoi(line);
        if(number > prevnum)
        {
            count++;
        }
        prevnum = number;
    }
    std::cout << count;
    myfile.close();
}