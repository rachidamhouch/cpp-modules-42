#ifndef PPFORM_HPP
# define PPFORM_HPP
# include "AForm.hpp"
class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};
#endif
