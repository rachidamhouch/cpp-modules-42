#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Defaul"), grade(1){}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat& copy): name(copy.name), grade(copy.grade){}
Bureaucrat::~Bureaucrat(){}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
    {
        grade = copy.grade;
    }
    return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

std::string Bureaucrat::getName() const
{
    return (name);
}
