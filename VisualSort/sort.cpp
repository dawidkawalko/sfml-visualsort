#include "sort.hpp"

Sort::Sort()
{
	m_isRunning = false;
	m_sleepTime = 0;
	m_comparisons = 0;
	m_swaps = 0;
}

void Sort::start(std::vector<Sortable>& array)
{
	m_isRunning = true;
	m_comparisons = 0;
	m_swaps = 0;

	sort(array);

	m_isRunning = false;
}

std::string Sort::getName() const
{
	return m_name;
}

bool Sort::isRunning() const
{
	return m_isRunning;
}

void Sort::setSleepTime(const unsigned sleepTime)
{
	m_sleepTime = sleepTime;
}

unsigned Sort::getComparisons() const
{
	return m_comparisons;
}

unsigned Sort::getSwaps() const
{
	return m_swaps;
}

int Sort::compare(Sortable& a, Sortable& b)
{
	++m_comparisons;
	return (a < b ? -1 : (a > b ? 1 : 0));
}

void Sort::swap(Sortable& a, Sortable& b)
{
	Sortable tmp = a;
	a = b;
	b = tmp;

	m_swaps += 1;
}
