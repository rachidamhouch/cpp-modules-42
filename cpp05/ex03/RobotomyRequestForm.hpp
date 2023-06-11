#ifndef RRFORM_HPP
# define RRFORM_HPP
# include "AForm.hpp"
class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
};
#endif
