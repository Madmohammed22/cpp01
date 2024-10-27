#include <iostream>
#include <fstream>

using namespace std;

class Solution
{
public:
    std ::ifstream processFile(std::string filename, std::string s1, std::string s2)
    {
        // std::ifstream file(filename); // is the same like the one bellow
        std ::ifstream file;
        file.open(filename);
        if (!file.is_open())
        {
            std::cerr << "Error opening file: " << filename << std::endl;
            return file;
        }
        std ::string fileNameReplace = (filename) + "_replace";
        std::ofstream fileReplace(fileNameReplace);
        std::string result;

        std::string line;
        displayFile(file);
        while (std::getline(file, line))
        {
            if (line == s1)
                line = s2;
            result += line + "\n";
        }
        file.close();
        processFile(result, fileReplace);
        std ::ifstream file1(fileNameReplace);
        return file1;
    }
    void processFile(std::string result, std::ofstream &fileReplace);
    void displayFile(std::ifstream &file);
};

void Solution::processFile(std::string result, std::ofstream &fileReplace)
{
    if (!fileReplace.is_open())
    {
        std::cerr << "Error opening file." << std::endl;
        return;
    }
    fileReplace << result;
    fileReplace.close();
}

void Solution::displayFile(std::ifstream &file)
{
    std::string line;
    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }
    file.clear();
    file.seekg(0, std::ios::beg);
}

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        std::cerr << "Usage: " << argv[0] << " <string1> <string2>" << std::endl;
        return 1;
    }

    Solution solution;
    std::string filename = "input.txt";
    std::string s1 = argv[1];
    std::string s2 = argv[2];
    std::ifstream file = solution.processFile(filename, s1, s2);
    std::string line;
    std ::cout << "After replacing the file content is: " << std::endl;

    while (std::getline(file, line))
    {
        std::cout << line << std::endl;
    }
}