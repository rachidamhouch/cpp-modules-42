#include <iostream>
#include <map>
#include <fstream>
#include <sstream>


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

bool isValidDate(const std::string& dateString) {
    int count = 0, i = 0;
    int year;
    int month;
    int day;
    while (dateString[i])
    {
        if ((dateString[i] < '0' || dateString[i] > '9') && dateString[i] != '-')
            return (0);
        if (dateString[i] == '-')
            count++;
        i++;
    }
    if (count != 2)
        return (0);
    size_t Pos1 = dateString.find('-');
    size_t Pos2 = dateString.rfind('-');
    try
    {
        year = std::stoi(dateString.substr(0, Pos1));
        month = std::stoi(dateString.substr(Pos1 + 1, Pos2 - Pos1));
        day = std::stoi(dateString.substr(Pos2 + 1));
    }
    catch(const std::exception& e)
    {
        return (0);
    }
    
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    if ((month == 2 && day > 28 && year % 4 != 0) || (month == 2 && day > 29 && year % 4 == 0) ||
        ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30))
        return 0;
    return (1);
}

void out_put(std::map<std::string, float> &DATA, char *infile)
{
    (void)DATA;
    std::ifstream Infile;
    std::string line, first, second;
    size_t pos;
    int    error;

    Infile.open(infile);
    if (!Infile.good())
    {
        std::cerr << "Can't open " << infile << std::endl;
        exit(1);
    }
    std::getline(Infile, line);
    if (line != "date | value")
    {
        std::cerr << "The infile header is Missing!" << infile << std::endl;
        exit(1);
    }
    while (std::getline(Infile, line))
    {   
        error = 0;
        pos = line.find(' ');
        first = line.substr(0, pos);
        pos = line.find('|');
        try
        {
            if (pos != std::string::npos)
                second = line.substr(pos + 2, line.length());
            else
                error = 1;
            if (error || !isValidDate(first))
             std::cerr << "Error: bad input => " << line << std::endl;
            else if (std::stoi(second) < 0)
                std::cerr << "Error: not a positive number." << std::endl;
            else if (std::stoi(second) > 1000)
                std::cerr << "Error: too large a number." << std::endl;
            else
                std::cout << first << "+" << second << std::endl;
        }
        catch(const std::exception& e)
        {
            if (line[0] == '-')
                std::cerr << "Error: not a positive number." << std::endl;
            else
                std::cerr << "Error: too large a number." << std::endl;
        }
    }
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
