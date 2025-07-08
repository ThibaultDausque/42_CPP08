#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack() {}
        MutantStack(const MutantStack &cpy) {*this = cpy;}
        ~MutantStack() {}
        MutantStack&    operator=(const MutantStack& src)
        {
            if (this != &src)
                *this = src;
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator  begin()
        {
            return this->c.begin();
        }
        iterator  end()
        {
            return this->c.end();
        }
};

#endif
