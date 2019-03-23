#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include "../sort.hpp"

/**
* Bubble sort implementation
*/
class BubbleSort : public Sort
{
public:
	/**
	* Constructor, sets waiting time between algorithm steps
	*
	* @param sleepTime Time between each algorithm step in milliseconds
	*/
	BubbleSort(const unsigned sleepTime);

	/**
	* Overrides the Sort::sort() method
	*/
	void sort(std::vector<Sortable>& array) override;
};

#endif // BUBBLESORT_HPP
