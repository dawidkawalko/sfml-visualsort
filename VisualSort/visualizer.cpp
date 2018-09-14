#include "visualizer.hpp"

Visualizer::Visualizer(const unsigned windowWidth, const unsigned windowHeight)
{
	m_windowWidth = windowWidth;
	m_windowHeight = windowHeight;
	m_window.create(sf::VideoMode(m_windowWidth, m_windowHeight), "Visualization of sorting algorithms", sf::Style::Close);
}

void Visualizer::start()
{
	// todo: create an array of (shuffled) sortable objects

	mainLoop();
}

void Visualizer::mainLoop()
{
	while (m_window.isOpen())
	{
		handleEvents();
		update();
		render();
	}
}

void Visualizer::handleEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		switch (event.type)
		{
			case sf::Event::Closed:
				m_window.close();
				break;
		}
	}
}

void Visualizer::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		// todo: start the thread if not running
	}
}

void Visualizer::render()
{
	m_window.clear();
	m_window.display();
}
