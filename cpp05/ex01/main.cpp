#include "Form.hpp"

int main()
{ 
    try
    {
        Bureaucrat b("Racha", 5), c("Mohammed", 20);
        Form a("Rachid", 10, 150);
        std::cout << a;
        a.beSigned(b);
        std::cout << a;
        a.beSigned(c);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Finish" << std::endl;
}

