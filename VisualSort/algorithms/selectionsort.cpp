#include "selectionsort.hpp"

SelectionSort::SelectionSort(const unsigned sleepTime)
{
	m_sleepTime = sleepTime;
}

void SelectionSort::sort(std::vector<Sortable>& array)
{
	for (unsigned i = 0; i < array.size(); ++i)
	{
		int smallestIndex = i;
		for (unsigned j = i + 1; j < array.size(); ++j)
		{
			array[i].highlight(sf::Color::Magenta);
			array[j].highlight(sf::Color::Magenta);

			std::this_thread::sleep_for(std::chrono::milliseconds(m_sleepTime));

			array[i].highlight();
			array[j].highlight();

			if (smaller(array[j], array[smallestIndex]))
			{
				smallestIndex = j;
			}
		}

		swap(array[i], array[smallestIndex]);
	}
}
