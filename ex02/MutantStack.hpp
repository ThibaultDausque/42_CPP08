#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack() : stack() {}
        MutantStack(const MutantStack &cpy) : stack(cpy) {*this = src}
        ~MutantStack() {}
        MutantStack&    operator=(const MutantStack& src)
        {
            if (this != &src)
                *this = src;
            return *this;
        }
        typedef typename std::stack<T>::container_type::iterator    it;
        it  begin()
        {
            return this->c.begin();
        }
        it  end()
        {
            return this->c.end();
        }
};

#endif
