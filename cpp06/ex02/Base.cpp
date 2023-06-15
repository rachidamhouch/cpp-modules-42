#include "Base.hpp"

Base::~Base(){}

Base* generate(void)
{
	srand(time(0));
	int	num = rand() % 3;

	if (!num)
		return (new A);
	else if (num == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type is: " << "A" << std::endl;
	else if ((dynamic_cast<B*>(p)))
		std::cout << "Type is: "<< "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type is: " << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "Type is: " << "A" << std::endl;
	else if ((dynamic_cast<B*>(&p)))
		std::cout << "Type is: "<< "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "Type is: " << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}
