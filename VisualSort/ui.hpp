#ifndef UI_HPP
#define UI_HPP

#include <SFML/Graphics.hpp>

class UI
{
public:
	UI();
	bool setDefaultFont(const std::string path);
	void setComparisons(const unsigned comparisons);
	void setSwaps(const unsigned swaps);
	void render(sf::RenderWindow& window) const;

private:
	sf::Font m_fontDefault;
	sf::Text m_textInstructions;
	sf::Text m_textComparisons;
	sf::Text m_textSwaps;
};

#endif // UI_HPP
