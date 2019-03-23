#ifndef VISUALIZER_HPP
#define VISUALIZER_HPP

#include "ui.hpp"
#include "sort.hpp"

/**
* Main class
*/
class Visualizer
{
public:
	/**
	* Constructor, sets initial values and creates the window
	*
	* @param windowWidth Width of the window in pixels
	* @param windowHeight Height of the window in pixels
	*/
	Visualizer(const unsigned windowWidth, const unsigned windowHeight);

	/**
	* Sets the margins, i.e. empty space around Sortables
	*
	* @param top Top margin, space between the top of the window and the highest Sortable
	* @param between Space between each Sortable
	*/
	void setMargins(const unsigned top, const unsigned between);

	/**
	* Starts the program
	*
	* @param count Number of Sortables to sort
	* @param algorithm Algorithm to be used for sorting
	* @param sleepTime Time between each step of the algorithm (practically meaning animation delay)
	*/
	void start(const unsigned count, std::unique_ptr<Sort> algorithm, const unsigned sleepTime);

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
