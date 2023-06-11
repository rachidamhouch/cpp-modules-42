#include "AForm.hpp"

int main()
{ 
    try
    {
        Bureaucrat b("Racha", 5), c("Mohammed", 11);
        AForm a("1", 10, 150), d("1", 4, 150);
        std::cout << a;
        a.beSigned(b);
        std::cout << a;
        c.signForm(a);
        a.beSigned(c);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Finish" << std::endl;
}

