#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    private:
 
    public:
        MutantStack(){}
        MutantStack(MutantStack<T> const &copy);
        MutantStack<T>& operator=(MutantStack<T> const &copy);
        ~MutantStack(){}
		typedef typename Container::iterator	iterator;
		typedef typename Container::const_iterator	c_iterator;
		typedef typename Container::reverse_iterator	r_iterator;
		typedef typename Container::const_reverse_iterator	c_r_iterator;

		iterator		begin(void) {return this->c.begin();}
		iterator		end(void) {return this->c.end();}
		c_iterator	    begin(void) const {return this->c.begin();}
		c_iterator		end(void) const {return this->c.end();}
		r_iterator		rbegin(void) {return this->c.rbegin();}
		r_iterator		rend(void) {return this->c.rend();}
		c_r_iterator	rbegin(void) const {return this->c.rbegin();}
		c_r_iterator	rend(void) const {return this->c.rend();}
};
#endif