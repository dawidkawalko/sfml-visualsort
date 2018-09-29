#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include "../sort.hpp"

class BubbleSort : public Sort
{
public:
	void sort(std::vector<Sortable>& array) override;
};

#endif // BUBBLESORT_HPP
