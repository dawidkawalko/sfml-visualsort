#include "selectionsort.hpp"

SelectionSort::SelectionSort(const unsigned sleepTime)
{
	m_sleepTime = sleepTime;
	m_name = "Selection sort";
}

void SelectionSort::sort(std::vector<Sortable>& array)
{
	for (unsigned i = 0; i < array.size(); ++i)
	{
		int smallestIndex = i;
		for (unsigned j = i + 1; j < array.size(); ++j)
		{
			if (!m_isRunning)
			{
				return;
			}

			array[i].highlight(sf::Color::Magenta);
			array[j].highlight(sf::Color::Magenta);

			std::this_thread::sleep_for(std::chrono::milliseconds(m_sleepTime));

			array[i].highlight();
			array[j].highlight();

			if (compare(array[j], array[smallestIndex]) <= 0)
			{
				smallestIndex = j;
			}
		}

		swap(array[i], array[smallestIndex]);
	}
}
