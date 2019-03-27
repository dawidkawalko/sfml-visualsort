#include "ui.hpp"

UI::UI()
{
	m_textInstructions.setCharacterSize(20);
	m_textComparisons.setCharacterSize(20);
	m_textSwaps.setCharacterSize(20);
	m_availableAlgorithms.setCharacterSize(20);
	m_activeAlgorithmLabel.setCharacterSize(20);
	m_activeAlgorithm.setCharacterSize(20);

	m_textInstructions.setPosition(10, 10);
	m_textComparisons.setPosition(10, 40);
	m_textSwaps.setPosition(10, 60);
	m_availableAlgorithms.setPosition(10, 90);
	m_activeAlgorithmLabel.setPosition(10, 110);
	m_activeAlgorithm.setPosition(335, 110);

	m_activeAlgorithm.setFillColor(sf::Color::Green);

	m_textInstructions.setString("Press [space] to sort, [x] to stop sorting, [r] to re-shuffle the array.");
	m_availableAlgorithms.setString("Choose an algorithm: [b] Bubble sort, [s] Selection sort, [m] Merge sort");
	m_activeAlgorithmLabel.setString("Currently selected algorithm: ");
	m_activeAlgorithm.setString("Test");
}

bool UI::setDefaultFont(const std::string path)
{
	if (!m_fontDefault.loadFromFile(path))
	{
		return false;
	}

	m_textInstructions.setFont(m_fontDefault);
	m_textComparisons.setFont(m_fontDefault);
	m_textSwaps.setFont(m_fontDefault);
	m_availableAlgorithms.setFont(m_fontDefault);
	m_activeAlgorithmLabel.setFont(m_fontDefault);
	m_activeAlgorithm.setFont(m_fontDefault);

	return true;
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
	window.draw(m_textInstructions);
	window.draw(m_textComparisons);
	window.draw(m_textSwaps);
	window.draw(m_availableAlgorithms);
	window.draw(m_activeAlgorithmLabel);
	window.draw(m_activeAlgorithm);
}

void UI::setCurrentAlgorithm(const std::string& name)
{
	m_activeAlgorithm.setString(name);
}