#include "Intern.hpp"

int main()
{ 
    try
    {
        Bureaucrat a("Rachid", 1);
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        rrf->beSigned(a);
        rrf->execute(a);
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
