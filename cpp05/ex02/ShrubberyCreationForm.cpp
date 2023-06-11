#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    setTarget("Default");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
    setTarget(copy.getTarget());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)
    {
        setTarget(copy.getTarget());
        if (copy.getSigned())
            setSigned(1);
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getG_execute())
        throw AForm::GradeTooLowException();
    if (!getSigned())
        throw AForm::AFormNotSignedException();
    std::ofstream file(getTarget() + "_shrubbery");
    file << "          .     .  .      +     .      .          .\n\
     .       .      .     #       .           .\n\
        .      .         ###            .      .      .\n\
      .      .   \"#:. .:##\"##:. .:#\"  .      .\n\
          .      . \"####\"###\"####\"  .\n\
       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n\
  .             \"#########\"#########\"        .        .\n\
        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n\
     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n\
                .\"##\"#####\"#####\"##\"           .      .\n\
    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n\
      .     \"#######\"##\"#####\"##\"#######\"      .     .\n\
    .    .     \"#####\"\"#######\"\"#####\"    .      .\n\
            .     \"      000      \"    .     .\n\
       .         .   .   000     .        .       .\n\
.. .. ..................O000O........................ ...... ...";
    file.close();
}