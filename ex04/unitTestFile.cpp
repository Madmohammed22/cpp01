#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    std :: string filename = "test.txt";
    std :: ofstream outFile(filename);
    std :: string content = "this is just a test";
    outFile << content;
    outFile.close();
    std :: ifstream file(filename);
    std :: string line;
    while(std :: getline(file, line)){
        std :: cout << line << std :: endl;
    }
    return 0;
}