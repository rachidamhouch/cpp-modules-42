#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{ 
    try
    {
        Bureaucrat c("Rachid", 5);
        AForm *a = new PresidentialPardonForm("HHH");
        a->beSigned(c);
        a->execute(c);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Finish" << std::endl;
}

