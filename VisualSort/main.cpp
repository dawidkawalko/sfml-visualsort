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
	const unsigned NUMBERS_COUNT = 50;
	const unsigned ANIMATION_TIME_MS = 1;

	Visualizer visualizer(WINDOW_WIDTH, WINDOW_HEIGHT);
	visualizer.setMargins(MARGIN_TOP, MARGIN_BETWEEN);

	visualizer.start(NUMBERS_COUNT, ANIMATION_TIME_MS);
}
