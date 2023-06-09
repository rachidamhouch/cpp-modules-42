#include "Bureaucrat.hpp"

int main()
{ 
    try
    {
        Bureaucrat a("Rachid", 2);
        std::cout << a << std::endl;
        a.increment();
        std::cout << a << std::endl;
        a.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Finish" << std::endl;
}
