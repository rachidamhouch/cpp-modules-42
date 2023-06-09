#include "Form.hpp"

Form::Form():name("Default"), _signed(0), g_sign(1), g_execute(1){}
Form::Form(std::string name, int g_sign, int g_execute):
name(name), _signed(0), g_sign(g_sign), g_execute(g_execute)
{
    if (g_sign < 1 || g_execute < 1)
        throw Form::GradeTooHighException();
    if (g_sign > 150 || g_execute > 150)
        throw Form::GradeTooLowException();
}
Form::Form(const Form& copy):
name(copy.name), _signed(copy._signed), g_sign(copy.g_sign), g_execute(copy.g_execute){}
Form::~Form(){}
Form& Form::operator=(const Form& copy)
{
    if (this != &copy)
    {
        _signed = copy._signed;
    }
    return (*this);
}
std::string Form::getNmae()
{
    return (name);
}
bool Form::getSigned()
{
    return (_signed);
}
int Form::getG_execute()
{
    return (g_execute);
}
int Form::getG_sign()
{
    return (g_sign);
}
std::ostream& operator<<(std::ostream& out, Form &form)
{
    out << "Name: " << form.getNmae() << std::endl;
    if (form.getSigned())
        out << "Signed: Yes" << std::endl;
    else
        out << "Signed: No" << std::endl;
    out << "Grade required to sign: " << form.getG_sign() << std::endl;
    out << "Grade required to execute: " << form.getG_execute() << std::endl;
    return (out);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

void Form::beSigned(const Bureaucrat &B)
{
    if (B.getGrade() <= g_sign)
        _signed = 1;
    else
        throw Form::GradeTooLowException();
}
