#ifndef SORTABLE_HPP
#define SORTABLE_HPP

#include <SFML/Graphics.hpp>

/**
* This class represents a sortable object, which has a numeric value used for sorting
* and can be rendered on the screen. It is used by every sorting algorithm inheriting
* from the Sort class
*/
class Sortable
{
public:
	/**
	* Constructor, sets the internal value
	*
	* @param value Numeric value used for sorting
	*/
	Sortable(const unsigned value);

	/**
	* Sets the UI size of this Sortable
	*
	* @param width On-screen width in pixels
	* @param height On-screen height in pixel
	*/
	void setSize(const float width, const float height);

	/**
	* Renders the Sortable on the screen
	*
	* @param window Target window on which to draw
	* @param position Position relative to the top-left corner of the screen
	*/
	void render(sf::RenderWindow& window, const float position);

	/**
	* Resets the color of this Sortable
	*/
	void highlight();

	/**
	* Sets the color of this Sortable
	*
	* @param color SFML color value
	*/
	void highlight(const sf::Color& color);

	/**
	* Checks if the internal value is greater then that of a different Sortable
	*/
	bool operator >(const Sortable& other)
	{
		return m_value > other.m_value;
	}

	/**
	* Checks if the internal value is smaller then that of a different Sortable
	*/
	bool operator <(const Sortable& other)
	{
		return m_value < other.m_value;
	}

private:
	unsigned m_value;
	sf::RectangleShape m_shape;
	sf::Color m_defaultColor;
};

#endif // SORTABLE_HPP
