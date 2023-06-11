#ifndef SHCFORM_HPP
# define SHCFORM_HPP
# include "AForm.hpp"
class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};
#endif