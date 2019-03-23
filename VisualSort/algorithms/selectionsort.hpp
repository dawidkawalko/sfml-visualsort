#ifndef SELECTIONSORT_HPP
#define SELECTIONSORT_HPP

#include "../sort.hpp"

/**
* Selection sort implementation
*/
class SelectionSort : public Sort
{
public:
	/**
	* Overrides the Sort::sort() method
	*/
	void sort(std::vector<Sortable>& array) override;
};

#endif // SELECTIONSORT_HPP
