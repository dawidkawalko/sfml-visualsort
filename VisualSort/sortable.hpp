#ifndef SORTABLE_HPP
#define SORTABLE_HPP

#include <SFML/Graphics.hpp>

class Sortable
{
public:
	Sortable(const unsigned value);
	void setSize(const float width, const float height);
	void render(sf::RenderWindow& window, const unsigned position);
	void highlight(const sf::Color& color = sf::Color::White);

	bool operator >(const Sortable& other)
	{
		return m_value > other.m_value;
	}

private:
	unsigned m_value;
	sf::RectangleShape m_shape;
};

#endif // SORTABLE_HPP
