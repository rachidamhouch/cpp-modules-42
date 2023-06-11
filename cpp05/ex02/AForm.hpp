#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <fstream>
class Bureaucrat;
class AForm
{
    private:
        const std::string   name;
        std::string 		target;
        bool _signed;
        const int g_sign;
        const int g_execute;
    public:
        AForm();
        AForm(std::string name, int g_sign, int g_execute);
        AForm(const AForm& copy);
        ~AForm();
        AForm& operator=(const AForm& copy);
        std::string getName(void) const;
        bool getSigned(void) const;
        int getG_sign(void) const;
        int getG_execute(void) const;
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
        std::string getTarget(void) const;
        void setTarget(const std::string target);
        virtual void		execute(Bureaucrat const & executor) const = 0;
        class AFormNotSignedException: public std::exception
		{
			public:
				const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream& out, AForm &form);
#endif
