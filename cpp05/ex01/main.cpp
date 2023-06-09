#include "Form.hpp"

int main()
{ 
    try
    {
        Form a("Rachid", 1, 150);
        std::cout << a;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Finish" << std::endl;
}
