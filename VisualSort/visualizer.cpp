#include "visualizer.hpp"

Visualizer::Visualizer(const unsigned windowWidth, const unsigned windowHeight)
{
	m_windowWidth = windowWidth;
	m_windowHeight = windowHeight;
	m_marginTop = 0;
	m_marginBetween = 0;
	m_window.create(sf::VideoMode(m_windowWidth, m_windowHeight), "Visualization of sorting algorithms", sf::Style::Close);
}

void Visualizer::setMargins(const unsigned top, const unsigned between)
{
	m_marginTop = top;
	m_marginBetween = between;
}

void Visualizer::start(const unsigned count)
{
	if (!m_ui.setDefaultFont("assets/consola.ttf"))
	{
		return;
	}

	m_array.clear();
	for (unsigned i = 1; i <= count; i++)
	{
		Sortable sortable(i);
		sortable.setSize(m_windowWidth/float(count) - m_marginBetween, (i/float(count)) * (m_windowHeight - m_marginTop));

		m_array.push_back(sortable);
	}

	std::random_shuffle(m_array.begin(), m_array.end());

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
	m_ui.render(m_window);

	for (unsigned i = 0; i < m_array.size(); i++)
	{
		unsigned size = m_windowWidth / (float)m_array.size();
		m_array[i].render(m_window, (i+1)*size - m_marginBetween);
	}

	m_window.display();
}