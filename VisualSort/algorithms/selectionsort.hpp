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
	* Constructor, sets waiting time between algorithm steps
	*
	* @param sleepTime Time between each algorithm step in milliseconds
	*/
	SelectionSort(const unsigned sleepTime);

	/**
	* Overrides the Sort::sort() method
	*/
	void sort(std::vector<Sortable>& array) override;
};

#endif // SELECTIONSORT_HPP
