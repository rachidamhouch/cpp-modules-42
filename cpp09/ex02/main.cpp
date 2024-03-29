#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

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
std::deque<int> insertDeq(std::deque<int> &Tab)
{
    int n = Tab.size();

    for (int i = 1; i < n; ++i)
    {
        int key = Tab[i];
        int j = i - 1;

        while (j >= 0 && Tab[j] > key)
        {
            Tab[j + 1] = Tab[j];
            j--;
        }
        Tab[j + 1] = key;
    }
    return (Tab);
}

std::deque<int> mergeDeq(std::deque<int> &Tab)
{
    unsigned long i = 0, n = 0, t = 0;
    std::deque<int> left, right;

    if (Tab.size() > 100)
    {
        while (i < Tab.size() / 2)
        {
            left.push_back(Tab[i]);
            i++;
        }
        while (i < Tab.size())
        {
            right.push_back(Tab[i]);
            i++;
        }
        left = mergeDeq(left);
        right = mergeDeq(right);
    }
    else
        return (insertDeq(Tab));
    i = 0;
    while(i < left.size() && n < right.size())
    {
        if (left[i] < right[n])
        {
            Tab[t] = left[i];
            i++;
            t++;
        }
        else
        {
            Tab[t] = right[n];
            n++;
            t++;
        }
    }
    while(i < left.size())
    {
        Tab[t] = left[i];
        i++;
        t++;
    }
    while(n < right.size())
    {
        Tab[t] = right[n];
        n++;
        t++;
    }
    return (Tab);
}

float mergeInserDeq(std::deque<int> &Tab)
{
    std::clock_t start = std::clock();
    mergeDeq(Tab);
    std::clock_t end = std::clock();
    return (static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0);
}

std::vector<int> insertVec(std::vector<int> &Tab)
{
    int n = Tab.size();

    for (int i = 1; i < n; ++i)
    {
        int key = Tab[i];
        int j = i - 1;

        while (j >= 0 && Tab[j] > key)
        {
            Tab[j + 1] = Tab[j];
            j--;
        }
        Tab[j + 1] = key;
    }
    return (Tab);
}

std::vector<int> mergeVec(std::vector<int> &Tab)
{
    unsigned long i = 0, n = 0, t = 0;
    std::vector<int> left, right;

    if (Tab.size() > 100)
    {
        while (i < Tab.size() / 2)
        {
            left.push_back(Tab[i]);
            i++;
        }
        while (i < Tab.size())
        {
            right.push_back(Tab[i]);
            i++;
        }
        left = mergeVec(left);
        right = mergeVec(right);
    }
    else
        return (insertVec(Tab));
    i = 0;
    while(i < left.size() && n < right.size())
    {
        if (left[i] < right[n])
        {
            Tab[t] = left[i];
            i++;
            t++;
        }
        else
        {
            Tab[t] = right[n];
            n++;
            t++;
        }
    }
    while(i < left.size())
    {
        Tab[t] = left[i];
        i++;
        t++;
    }
    while(n < right.size())
    {
        Tab[t] = right[n];
        n++;
        t++;
    }
    return (Tab);
}

float mergeInserVec(std::vector<int> &Tab)
{
    std::clock_t start = std::clock();
    mergeVec(Tab);
    std::clock_t end = std::clock();
    return (static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0);
}

int main(int ac, char **av)
{
    float v,d;
    unsigned long int i = 1;
    std::vector<int> Vec;
    std::deque<int> Deq;

    if (ac < 2)
    {
        std::cerr << "Usage: ./PmergeMe Numbers" << std::endl;
        exit (1);
    }
    while (i < (unsigned long)ac)
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
    std::cout << "Before: ";
    i = 0;
    while (i < Vec.size())
    {
        std::cout << Vec[i] << " ";
        i++;
    }
    std::cout << std::endl;
    d = mergeInserDeq(Deq);
    v = mergeInserVec(Vec);
    std::cout << "After: ";
    i = 0;
    while (i < Vec.size())
    {
        std::cout << Vec[i] << " ";
        i++;
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of "<< Vec.size() <<" elements with std::vector : "<< v <<" us" << std::endl;
    std::cout << "Time to process a range of "<< Vec.size() <<" elements with std::deque : "<< d <<" us" << std::endl;
    return (0);
}