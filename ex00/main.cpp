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
	
	try 
	{
		::easyfind(list, 42);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		::easyfind(c_list, 't');
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
