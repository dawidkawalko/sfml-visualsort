#include "sortable.hpp"

Sortable::Sortable(const unsigned value)
{
	m_value = value;
}

void Sortable::setSize(const float width, const float height)
{
	m_shape.setSize(sf::Vector2f(width, height));
	m_shape.setOrigin(sf::Vector2f(width, height));
}

void Sortable::render(sf::RenderWindow& window, const float position)
{
	m_shape.setPosition(position, window.getSize().y);
	window.draw(m_shape);
}

void Sortable::highlight(const sf::Color& color)
{
	m_shape.setFillColor(color);
}
