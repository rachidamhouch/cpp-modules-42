#ifndef INTERN_HPP
# define INTERN_HPP
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
class Intern
{
    public:
		Intern(void);
		Intern(const Intern &intern);
		virtual ~Intern();
		Intern& operator=(const Intern &intern);
		AForm	*makeForm(const std::string formName, const std::string target) const;
};
#endif