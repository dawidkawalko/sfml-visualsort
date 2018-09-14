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

protected:
	bool m_isRunning;
	unsigned m_sleepTime;

	void swap(Sortable& a, Sortable& b);
};

#endif // SORT_HPP
