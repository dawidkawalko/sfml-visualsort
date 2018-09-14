#ifndef VISUALIZER_HPP
#define VISUALIZER_HPP

#include "ui.hpp"
#include "sort.hpp"
#include <thread>

class Visualizer
{
public:
	Visualizer(const unsigned windowWidth, const unsigned windowHeight);
	void setMargins(const unsigned top, const unsigned between);
	void start(const unsigned count, std::unique_ptr<Sort> algorithm);

private:
	unsigned m_windowWidth;
	unsigned m_windowHeight;
	unsigned m_marginTop;
	unsigned m_marginBetween;

	sf::RenderWindow m_window;
	UI m_ui;

	std::vector<Sortable> m_array;
	std::unique_ptr<Sort> m_sortingAlgorithm;

	void mainLoop();
	void handleEvents();
	void update();
	void render();
	void startSort();
};

#endif // VISUALIZER_HPP
