#include "Span.hpp"

Span::Span()
{
	this->_tab.push_back(0);
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
	if ((unsigned int)*this->_tab.end() >= this->_N)
		throw std::runtime_error("* the vector list is full *");
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

	min = 0;
	std::sort(_tab.begin(), _tab.end());
	for (size_t i = 0; i < _tab.size(); i++)
	{
		for (size_t j = 0; j < _tab.size(); j++)
		{
			if (static_cast<int>(_tab[i]) - static_cast<int>(_tab[j]))
				min = static_cast<int>(_tab[1]) - static_cast<int>(_tab[0]);
		}
	}
	return min;
}
