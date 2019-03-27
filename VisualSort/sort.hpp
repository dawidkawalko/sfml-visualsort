#ifndef SORT_HPP
#define SORT_HPP

#include "sortable.hpp"
#include <vector>
#include <thread>
#include <chrono>

/**
* Base class for every sorting algorithm
*/
class Sort
{
public:
	/**
	* Default constructor
	*/
	Sort();

	/**
	* Default destructor
	*/
	virtual ~Sort() = default;

	/**
	* Starts sorting, resets the internal state
	*
	* @param array A vector of Sortables to be sorted
	*/
	void start(std::vector<Sortable>& array);

	/**
	* Stops the algorithm
	*/
	void stop();

	/**
	* Returns the name of this algorithm
	*
	* @return std::string
	*/
	std::string getName() const;

	/**
	* Checks whether the algorithm is still running
	*
	* @return bool
	*/
	bool isRunning() const;

	/**
	* Sets the idle time between each step of the algorithm
	*
	* @param sleepTime Time between steps in milliseconds
	*/
	void setSleepTime(const unsigned sleepTime);

	/**
	* Returns the total number of comparisons done by the algorithm
	*
	* @return unsigned
	*/
	unsigned getComparisons() const;

	/**
	* Returns the total number of swaps done by the algorithm
	*
	* @return unsigned
	*/
	unsigned getSwaps() const;

protected:
	std::string m_name;
	bool m_isRunning;
	unsigned m_sleepTime;
	unsigned m_comparisons;
	unsigned m_swaps;

	virtual void sort(std::vector<Sortable>& array) = 0;
	int compare(Sortable& a, Sortable& b);
	void swap(Sortable& a, Sortable& b);
};

#endif // SORT_HPP
