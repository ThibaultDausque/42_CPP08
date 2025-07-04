#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
typename T::iterator	easyfind(T &a, int idx)
{
	typename T::iterator	occ;
	
		occ = find(a.begin(), a.end(), idx);
		if (!*occ)
			throw std::runtime_error("No occurence found");
		return occ;
}

#endif
