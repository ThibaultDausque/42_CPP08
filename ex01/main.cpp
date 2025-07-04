#include "Span.hpp"

int	main(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// for (int i = 1; i <= 1000000; i++)
	// 	sp.addNumber(i);
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;	
	return 0;
}
