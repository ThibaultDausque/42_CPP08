#include "Span.hpp"

int	main(void)
{

	Span sp = Span(5);
	Span sp2 = Span(15000);
	std::vector<int>	v;
	std::srand(time(NULL));
	try
	{
		for (int i = 0; i < 100; i++)
    	{
        	int random_int = rand() % 1000000;
        	v.push_back(random_int);
   		}
		sp2.addNumber(v.begin(), v.end());
		sp2.displayTab();
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.displayTab();
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
