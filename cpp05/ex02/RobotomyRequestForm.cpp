#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    setTarget("Default");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
    setTarget(copy.getTarget());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    if (this != &copy)
    {
        setTarget(copy.getTarget());
        if (copy.getSigned())
            setSigned(1);
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    srand(time(NULL));
    int a = rand() % 2;
    if (executor.getGrade() > getG_execute())
        throw AForm::GradeTooLowException();
    if (!getSigned())
        throw AForm::AFormNotSignedException();
    if (a)
        std::cout << getTarget() << " has been robotomized." << std::endl;
    else
        std::cout << "the robotomy failed." << std::endl;
}
