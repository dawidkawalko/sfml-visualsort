#ifndef MERGESORT_HPP
#define MERGESORT_HPP

#include "../sort.hpp"

/**
* Merge sort implementation
*/
class MergeSort : public Sort
{
public:
	/**
	* Constructor, sets waiting time between algorithm steps
	*
	* @param sleepTime Time between each algorithm step in milliseconds
	*/
	MergeSort(const unsigned sleepTime);

	/**
	* Overrides the Sort::sort() method
	*/
	void sort(std::vector<Sortable>& array) override;

private:
	void mergeSort(std::vector<Sortable>& array, const unsigned left, const unsigned right);
	void merge(std::vector<Sortable>& array, const unsigned left, const unsigned middle, const unsigned right);
};

#endif // MERGESORT_HPP