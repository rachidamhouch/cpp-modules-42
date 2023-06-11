#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    setTarget("Default");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
    setTarget(copy.getTarget());
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    if (this != &copy)
    {
        setTarget(copy.getTarget());
        if (copy.getSigned())
            setSigned(1);
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getG_execute())
        throw AForm::GradeTooLowException();
    if (!getSigned())
        throw AForm::AFormNotSignedException();
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
