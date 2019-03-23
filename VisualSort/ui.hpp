#ifndef UI_HPP
#define UI_HPP

#include <SFML/Graphics.hpp>

/**
* Used for managing a user interface on the screen
*/
class UI
{
public:
	/**
	* Default constructor. Sets size, position and initial values for UI components
	*/
	UI();

	/**
	* Sets the default font used by all UI components
	*
	* @param path Path to the font file
	*/
	bool setDefaultFont(const std::string path);

	/**
	* Sets the number of comparisons that will be displayed
	*
	* @param comparisons Number of comparisons
	*/
	void setComparisons(const unsigned comparisons);

	/**
	* Sets the number of swaps that will be displayed
	*
	* @param swaps Number of swaps
	*/
	void setSwaps(const unsigned swaps);

	/**
	* Renders the user interface
	*
	* @window Target window on which to draw the UI
	*/
	void render(sf::RenderWindow& window) const;

private:
	sf::Font m_fontDefault;
	sf::Text m_textInstructions;
	sf::Text m_textComparisons;
	sf::Text m_textSwaps;
};

#endif // UI_HPP
