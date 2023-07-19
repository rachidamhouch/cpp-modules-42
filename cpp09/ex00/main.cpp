#include <iostream>
#include <map>
#include <fstream>

void get_data(std::map<std::string, float> &DATA)
{
    std::ifstream DataFile;
    std::string line, first, second;

    DataFile.open("data.csv");
    if (!DataFile.good())
    {
        std::cerr << "Can't open data.csv" << std::endl;
        exit(1);
    }
    std::getline(DataFile, line);
    while (std::getline(DataFile, line))
    {
        first = line.substr(0, line.find(','));
        second = line.substr(line.find(',') + 1, line.length());
        DATA[first] = std::stof(second);
    }
}

void out_put(std::map<std::string, float> &DATA, char *infile)
{

}

int main(int ac, char **av)
{
    std::map<std::string, float> DATA;
    std::map<std::string, float>::iterator it;

    if (ac != 2)
    {
        std::cerr << "Usage: ./btc input.txt" << std::endl;
        exit(1);
    }
    get_data(DATA);
    out_put(DATA, av[1]);
}
