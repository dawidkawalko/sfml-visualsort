#include "bubblesort.hpp"

void BubbleSort::start(std::vector<Sortable>& array)
{
	m_isRunning = true;

	for (unsigned i = 0; i < array.size(); i++)
	{
		bool hasSwapped = false;
		for (unsigned j = 0; j < array.size() - i - 1; j++)
		{
			array[j].highlight(sf::Color::Magenta);
			array[j + 1].highlight(sf::Color::Magenta);

			std::this_thread::sleep_for(std::chrono::milliseconds(m_sleepTime));

			array[j].highlight();
			array[j + 1].highlight();

			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
				hasSwapped = true;
			}		
		}

		if (!hasSwapped)
		{
			break;
		}
	}

	m_isRunning = false;
}
