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
	* Overrides the Sort::sort() method
	*/
	void sort(std::vector<Sortable>& array) override;
};

#endif // BUBBLESORT_HPP
