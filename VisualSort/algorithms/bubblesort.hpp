#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include "../sort.hpp"

class BubbleSort : public Sort
{
public:
	void start(std::vector<Sortable>& array) const override;
};

#endif // BUBBLESORT_HPP