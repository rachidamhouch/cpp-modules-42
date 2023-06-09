#include "Bureaucrat.hpp"

int main()
{ 
    try
    {
        Bureaucrat a("Rachid", 1);
        a.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
