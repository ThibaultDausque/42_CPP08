#include "Span.hpp"

Span::Span()
{
	this->_tab.reserve(0);
	_N = 0;
}

Span::Span(unsigned int nb)
{
	this->_tab.reserve(nb);
	this->_N = nb;
}

Span::Span(const Span& cpy)
{
	*this = cpy;
}

Span::~Span()
{

}

Span&	Span::operator=(const Span& src)
{
	if (this != & src)
	{
		this->_tab = src._tab;
		this->_N = src._N;
	}
	return *this;
}

void	Span::addNumber(unsigned int nb)
{
	if ((unsigned int)this->_tab.size() <= this->_N)
		throw std::exception();
	this->_tab.push_back(nb);
}

int	Span::longestSpan()
{
	int		len;
	int		max;

	len = _tab.size();
	std::sort(_tab.begin(), _tab.end());
	max = static_cast<int>(_tab[len - 1]) - static_cast<int>(_tab[0]);
	return max;
}

int	Span::shortestSpan()
{
	int		min;

	std::sort(_tab.begin(), _tab.end());
	for (size_t i = 0; i < _tab.size() - 1; i++)
	{
		for (size_t j = i + 1; j < _tab.size(); j++)
		{
			if (static_cast<int>(_tab[j]) - static_cast<int>(_tab[i]) < min)
				min = static_cast<int>(_tab[j]) - static_cast<int>(_tab[i]);
		}
	}
	return min;
}

void	Span::displayTab()
{
	if (this->_N > 20)
		return ;
	std::sort(_tab.begin(), _tab.end());
	std::cout << "The tab: ";
	for (size_t i = 0; i < this->_tab.size(); i++)
		std::cout << this->_tab[i] << " ";
	std::cout << std::endl;
}