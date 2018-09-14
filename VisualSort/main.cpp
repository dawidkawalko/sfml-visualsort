#include "visualizer.hpp"
#include "algorithms/bubblesort.hpp"
#include <ctime>

int main(int argc, char** argv)
{
	srand(unsigned(time(0))); // for std::random_shuffle()

	const unsigned WINDOW_WIDTH = 1200;
	const unsigned WINDOW_HEIGHT = 800;
	const unsigned MARGIN_TOP = 200;
	const unsigned MARGIN_BETWEEN = 2;
	const unsigned NUMBERS_COUNT = 100;

	Visualizer vis(WINDOW_WIDTH, WINDOW_HEIGHT);
	vis.setMargins(MARGIN_BETWEEN, 2);
	vis.start(NUMBERS_COUNT, std::make_unique<BubbleSort>(), 10);
}
