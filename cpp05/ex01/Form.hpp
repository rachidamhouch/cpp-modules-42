#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Form
{
    private:
        const std::string name;
        bool _signed;
        const int g_sign;
        const int g_execute;
    public:
        Form();
        Form(std::string name, int g_sign, int g_execute);
        Form(const Form& copy);
        ~Form();
        Form& operator=(const Form& copy);
        std::string getNmae(void);
        bool <bureaucrat> signed <form>(void);
        int getG_sign(void);
        int getG_execute(void);
        class GradeTooHighException : public std::exception
        {
            public:
				const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
				const char* what() const throw();
        };
        void beSigned(const Bureaucrat &B);
        void setSigned(bool i);
};
std::ostream& operator<<(std::ostream& out, Form &form);
#endif