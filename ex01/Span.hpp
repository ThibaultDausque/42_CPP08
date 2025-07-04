#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<unsigned int>	_tab;
		unsigned int		_N;

	public:
		Span();
		Span(unsigned int nb);
		Span(const Span& cpy);
		Span&	operator=(const Span& src);
		~Span();
		void	addNumber(unsigned int nb);
		int		shortestSpan();
		int		longestSpan();
		void	displayTab();
};

#endif
