#ifndef SORT_HPP
#define SORT_HPP

#include "sortable.hpp"
#include <vector>
#include <thread>
#include <chrono>

class Sort
{
public:
	Sort();

	// every sub-class has to implement this method
	virtual void start(std::vector<Sortable>& array) = 0;

	bool isRunning() const;
	void setSleepTime(const unsigned sleepTime);
	unsigned getComparisons() const;
	unsigned getSwaps() const;

protected:
	bool m_isRunning;
	unsigned m_sleepTime;
	unsigned m_comparisons;
	unsigned m_swaps;

	bool greater(Sortable& a, Sortable& b);
	void swap(Sortable& a, Sortable& b);
};

#endif // SORT_HPP
