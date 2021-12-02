#include <iostream>
#include <istream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream myfile;
    std::string line;
    myfile.open("input.txt");
    std::string line1;
    std::string line2;
    std::string line3;
    
    int number = 0;
    int prevsum = 0;
    int count = 2;
    int count2 = 0;
    int sum = 0;

    int nums[3000];

    std::getline(myfile, line1);
    std::getline(myfile, line2);
    std::getline(myfile, line3);
    nums[0] = std::stoi(line1);
    nums[1] = std::stoi(line2);
    nums[2] = std::stoi(line3);

    prevsum = nums[0] + nums[1] + nums[2];
    while (std::getline(myfile, line)) 
    {
        count++;
        nums[count] = std::stoi(line);
        sum = nums[count - 2] + nums[count - 1] + nums[count];

        if(sum > prevsum)
        {
            count2++;
        }
        prevsum = sum;
    }
    std::cout << count2;
    myfile.close();
}