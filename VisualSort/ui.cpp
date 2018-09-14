#include "ui.hpp"

UI::UI()
{
	m_textComparisons.setCharacterSize(20);
	m_textSwaps.setCharacterSize(20);

	m_textComparisons.setPosition(10, 10);
	m_textSwaps.setPosition(10, 30);
}

bool UI::setDefaultFont(const std::string path)
{
	return m_fontDefault.loadFromFile(path);
}

void UI::setComparisons(const unsigned comparisons)
{
	m_textComparisons.setString("comparisons: " + std::to_string(comparisons));
}

void UI::setSwaps(const unsigned swaps)
{
	m_textSwaps.setString("swaps: " + std::to_string(swaps));
}

void UI::render(sf::RenderWindow& window) const
{
	window.draw(m_textComparisons);
	window.draw(m_textSwaps);
}