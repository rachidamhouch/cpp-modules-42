#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{ 
    try
    {
        Bureaucrat c("Rachid", 5);
        AForm *a = new ShrubberyCreationForm("HHH");
        a->execute(c);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Finish" << std::endl;
}

