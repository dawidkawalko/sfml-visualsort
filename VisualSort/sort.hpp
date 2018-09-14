#ifndef SORT_HPP
#define SORT_HPP

#include "sortable.hpp"
#include <vector>

class Sort
{
public:
	// every sub-class has to implement this method
	virtual void start(std::vector<Sortable>& array) = 0;
};

#endif // SORT_HPP
