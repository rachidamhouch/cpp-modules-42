#include <iostream>
#include <stack>

int main(int ac, char **av)
{
    int i = 0, tmp, tmp2;
    std::stack<int> myStack;

    if (ac != 2)
    {
        std::cerr << "Usage: ./RPN input" << std::endl;
        exit(1);
    }
    while (av[1][i])
    {
        if (av[1][i] >= '0' && av[1][i] <= '9')
            myStack.push(av[1][i] - '0');
        else if(av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '*' || av[1][i] == '/')
        {
            if (myStack.size() < 2)
            {
                std::cerr << "Error" << std::endl;
                exit(1);
            }
            tmp2 = myStack.top();
            myStack.pop();
            tmp = myStack.top();
            switch (av[1][i])
            {
                case '+':
                    tmp += tmp2;
                    break;
                case '-':
                    tmp -= tmp2;
                    break;
                case '*':
                    tmp *= tmp2;
                    break;
                case '/':
                    tmp /= tmp2;
                    break;
            }
            myStack.pop();
            myStack.push(tmp);
        }
        else if (av[1][i] != ' ')
        {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
        i++;
    }
    if (i == 0)
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    std::cout << myStack.top() << std::endl;
    return (0);
}