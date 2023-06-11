#include "AForm.hpp"

AForm::AForm():name("Default"), _signed(0), g_sign(1), g_execute(1){}
AForm::AForm(std::string name, int g_sign, int g_execute):
name(name), _signed(0), g_sign(g_sign), g_execute(g_execute)
{
    if (g_sign < 1 || g_execute < 1)
        throw AForm::GradeTooHighException();
    if (g_sign > 150 || g_execute > 150)
        throw AForm::GradeTooLowException();
}
AForm::AForm(const AForm& copy):
name(copy.name), _signed(copy._signed), g_sign(copy.g_sign), g_execute(copy.g_execute){}
AForm::~AForm(){}
AForm& AForm::operator=(const AForm& copy)
{
    if (this != &copy)
    {
        _signed = copy._signed;
    }
    return (*this);
}
std::string AForm::getName()
{
    return (name);
}
bool AForm::getSigned()
{
    return (_signed);
}
int AForm::getG_execute()
{
    return (g_execute);
}
int AForm::getG_sign()
{
    return (g_sign);
}
std::ostream& operator<<(std::ostream& out, AForm &form)
{
    out << "Name: " << form.getName() << std::endl;
    if (form.getSigned())
        out << "Signed: Yes" << std::endl;
    else
        out << "Signed: No" << std::endl;
    out << "Grade required to sign: " << form.getG_sign() << std::endl;
    out << "Grade required to execute: " << form.getG_execute() << std::endl;
    return (out);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

void AForm::beSigned(const Bureaucrat &B)
{
    if (B.getGrade() <= g_sign)
        _signed = 1;
    else
        throw AForm::GradeTooLowException();
}

void AForm::setSigned(bool i)
{
    _signed = i;
}
