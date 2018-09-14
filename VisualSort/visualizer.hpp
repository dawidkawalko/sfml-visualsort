#ifndef VISUALIZER_HPP
#define VISUALIZER_HPP

#include <SFML/Graphics.hpp>

class Visualizer
{
public:
	Visualizer(const unsigned windowWidth, const unsigned windowHeight);
	void start();

private:
	unsigned m_windowWidth;
	unsigned m_windowHeight;
	sf::RenderWindow m_window;

	void mainLoop();
	void handleEvents();
	void update();
	void render();
};

#endif // VISUALIZER_HPP
