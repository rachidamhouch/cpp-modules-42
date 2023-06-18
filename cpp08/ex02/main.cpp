#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    std::cout << "==================" << std::endl;
    MutantStack<int> mstack1 = mstack;
    MutantStack<int>::iterator it = mstack1.begin();
    MutantStack<int>::iterator ite = mstack1.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "==================" << std::endl;
    MutantStack<int>::const_iterator cit = mstack1.begin();
    MutantStack<int>::const_iterator cite = mstack1.end();
    ++cit;
    --cit;
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }
    std::stack<int> s(mstack);
    return (0);
}