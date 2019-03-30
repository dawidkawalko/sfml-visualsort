#ifndef VISUALIZER_HPP
#define VISUALIZER_HPP

#include "ui.hpp"
#include "sort.hpp"
#include "config/config.hpp"

/**
* Main class
*/
class Visualizer
{
public:
	/**
	* Constructor, sets initial values and creates the window
	*
	* @param configPath Path to the config file
	*/
	Visualizer(const std::string& configPath);

	/**
	* Starts the program
	*/
	void start();

private:
	unsigned m_windowWidth;
	unsigned m_windowHeight;
	unsigned m_marginTop;
	unsigned m_marginBetween;
	unsigned m_sleepTime;
	Config m_config;

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
