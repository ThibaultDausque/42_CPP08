#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	list;

	list.push_back(1);
	list.push_back(42);
	list.push_back(360);

	std::vector<char>	c_list;

	c_list.push_back('t');
	c_list.push_back('o');
	c_list.push_back('t');
	c_list.push_back('o');

	std::vector<int>::const_iterator	it_nb;
	std::vector<char>::const_iterator	it_c;
	
	try 
	{
		it_nb = ::easyfind(list, 42);
		std::cout << "nb list: " << *it_nb << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		it_c = ::easyfind(c_list, 't');
		std::cout << "char list: " << *it_c << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
