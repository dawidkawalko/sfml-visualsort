#ifndef VISUALIZER_HPP
#define VISUALIZER_HPP

#include "ui.hpp"
#include "sortable.hpp"
#include <vector>

class Visualizer
{
public:
	Visualizer(const unsigned windowWidth, const unsigned windowHeight);
	void setMargins(const unsigned top, const unsigned between);
	void start(const unsigned count);

private:
	unsigned m_windowWidth;
	unsigned m_windowHeight;
	unsigned m_marginTop;
	unsigned m_marginBetween;

	sf::RenderWindow m_window;
	UI m_ui;

	std::vector<Sortable> m_array;

	void mainLoop();
	void handleEvents();
	void update();
	void render();
};

#endif // VISUALIZER_HPP
