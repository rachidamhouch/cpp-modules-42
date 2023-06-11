#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(const Intern &intern)
{
    *this = intern;
}
Intern& Intern::operator=(const Intern &intern)
{
    (void)intern;
    return (*this);
}
Intern::~Intern(){}
AForm* Intern::makeForm(const std::string formName, const std::string target) const
{
    AForm *form = NULL;

    if (formName == "presidential pardon")
        form = new PresidentialPardonForm(target);
    else if (formName == "robotomy request")
        form = new RobotomyRequestForm(target);
    else if (formName == "shrubbery creation")
        form = new ShrubberyCreationForm(target);
    else
    {
        std::cout << "Intern can't create " << formName << " form." << std::endl;
        return (NULL);
    }
    std::cout << "Intern creates " << formName << "."<< std::endl;
    return (form);
}
