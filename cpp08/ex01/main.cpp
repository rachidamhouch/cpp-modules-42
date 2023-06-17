#include "easyfind.hpp"

int main()
{
    std::vector<int> T;
    T.push_back(1);
    T.push_back(2);
    T.push_back(3);
    T.push_back(4);
    T.push_back(5);
    try
    {
        easyfind(T, 10);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
