#include "sort.hpp"

Sort::Sort()
{
	m_isRunning = false;
}

bool Sort::isRunning() const
{
	return m_isRunning;
}

void Sort::swap(Sortable& a, Sortable& b)
{
	Sortable tmp = a;
	a = b;
	b = tmp;
}
