#include "sort.hpp"

Sort::Sort()
{
	m_isRunning = false;
	m_sleepTime = 0;
}

bool Sort::isRunning() const
{
	return m_isRunning;
}

void Sort::setSleepTime(const unsigned sleepTime)
{
	m_sleepTime = sleepTime;
}

void Sort::swap(Sortable& a, Sortable& b)
{
	Sortable tmp = a;
	a = b;
	b = tmp;
}
