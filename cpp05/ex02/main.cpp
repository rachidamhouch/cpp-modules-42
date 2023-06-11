#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{ 
    try
    {
        Bureaucrat c("Rachid", 5);
        AForm *a = new RobotomyRequestForm("Home");
        a->beSigned(c);
        a->execute(c);
        delete a;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("Rachid", 5);
        AForm *a = new ShrubberyCreationForm("Home");
        a->beSigned(c);
        a->execute(c);
        delete a;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("Rachid", 5);
        AForm *a = new PresidentialPardonForm("Home");
        a->beSigned(c);
        a->execute(c);
        delete a;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Finish" << std::endl;
}
