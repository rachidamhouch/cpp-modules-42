#include <iostream>
#include <vector>
#include <deque>

bool is_valid(char *str)
{
    int i = 0;
    if (str[i] == '+')
        i++;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return false;
        i++;
    }
    return true;
}

int main(int ac, char **av)
{
    int i = 1;
    std::vector<int> Vec;
    std::deque<int> Deq;

    if (ac < 2)
    {
        std::cerr << "Usage: ./PmergeMe Numbers" << std::endl;
        exit (1);
    }
    while (i < ac)
    {
        if (!is_valid(av[i]))
        {
            std::cerr << "Error" << std::endl;
            exit (1);
        }
        Vec.push_back(atoi(av[i]));
        Deq.push_back(atoi(av[i]));
        i++;
    }
    return (0);
}