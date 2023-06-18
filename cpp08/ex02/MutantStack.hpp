#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack(){}
        MutantStack(MutantStack<T> const &copy) : std::stack<T, Container>(copy) {};
        MutantStack<T>& operator=(MutantStack<T> const &copy)
		{
			if (this != & copy)
				std::stack<T, Container>::operator=(copy);
			return (*this);
		}
        ~MutantStack(){}
		typedef typename Container::iterator	iterator;
		typedef typename Container::const_iterator	const_iterator;

		iterator			begin(void) {return this->c.begin();}
		iterator			end(void) {return this->c.end();}
		const_iterator	    begin(void) const {return this->c.begin();}
		const_iterator		end(void) const {return this->c.end();}
};
#endif