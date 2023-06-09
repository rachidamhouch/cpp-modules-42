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

void Bureaucrat::increment()
{
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade -= 1;
}

void Bureaucrat::decrement()
{
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade += 1;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return (out);
}

void Bureaucrat::signForm(AForm &F)
{
    if (grade <= F.getG_sign())
    {
        std::cout << name << " signed " << F.getName() << std::endl;
        F.setSigned(1);
    }
    else
        std::cout << name << " couldn’t sign " << F.getName() << " because Grade is too Low" << std::endl;
}
void Bureaucrat::executeForm(AForm const & form)
{
	form.execute(*this);
	std::cout << getName() << " executes " << form.getName() << std::endl;
}