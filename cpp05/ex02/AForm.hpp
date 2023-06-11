#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool _signed;
        const int g_sign;
        const int g_execute;
    public:
        AForm();
        AForm(std::string name, int g_sign, int g_execute);
        AForm(const AForm& copy);
        ~AForm();
        AForm& operator=(const AForm& copy);
        std::string getName(void);
        bool getSigned(void);
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
std::ostream& operator<<(std::ostream& out, AForm &form);
#endif
