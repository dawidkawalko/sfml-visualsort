#include "mergesort.hpp"

MergeSort::MergeSort(const unsigned sleepTime)
{
	m_sleepTime = sleepTime;
	m_name = "Merge sort";
}

void MergeSort::sort(std::vector<Sortable>& array)
{
	mergeSort(array, 0, array.size() - 1);
}

void MergeSort::mergeSort(std::vector<Sortable>& array, const unsigned left, const unsigned right)
{
	unsigned size = array.size();
	if (left >= right)
	{
		return;
	}

	unsigned middle = (left + right) / 2;

	mergeSort(array, left, middle);
	mergeSort(array, middle + 1, right);

	merge(array, left, middle, right);
}

void MergeSort::merge(std::vector<Sortable>& array, const unsigned left, const unsigned middle, const unsigned right)
{
	std::vector<Sortable> tmp;
	for (int i = left; i <= right; ++i)
	{
		tmp.push_back(array[i]);
	}

	int i = left;
	int j = middle + 1;
	int k = 0;

	while (i <= middle && j <= right)
	{
		array[i].highlight(sf::Color::Magenta);
		array[j].highlight(sf::Color::Magenta);

		std::this_thread::sleep_for(std::chrono::milliseconds(m_sleepTime));

		array[i].highlight();
		array[j].highlight();

		if (compare(array[i], array[j]) <= 0)
		{
			tmp[k] = array[i++];
		}
		else
		{
			tmp[k] = array[j++];
		}

		++k;
	}

	while (i <= middle)
	{
		array[i].highlight(sf::Color::Magenta);
		std::this_thread::sleep_for(std::chrono::milliseconds(m_sleepTime));
		array[i].highlight();

		tmp[k++] = array[i++];
	}

	while (j <= right)
	{
		array[j].highlight(sf::Color::Magenta);
		std::this_thread::sleep_for(std::chrono::milliseconds(m_sleepTime));
		array[j].highlight();

		tmp[k++] = array[j++];
	}

	for (int i = left; i <= right; ++i)
	{
		array[i].highlight(sf::Color::Magenta);
		std::this_thread::sleep_for(std::chrono::milliseconds(m_sleepTime));
		array[i].highlight();

		array[i] = tmp[i - left];
	}
}
