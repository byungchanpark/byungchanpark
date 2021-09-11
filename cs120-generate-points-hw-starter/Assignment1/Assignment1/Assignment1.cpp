#include <iostream>
#include <doodle/doodle.hpp>

int DESIRED_WIDTH;
int DESIRED_HEIGHT;

constexpr size_t size = 100;

int Desired_Point_X;
int Desired_Point_Y;

int main(void)
{
	std::cout << "Enter in desired width: ";
	std::cin >> DESIRED_WIDTH;

	std::cout << "Enter in desired height: ";
	std::cin >> DESIRED_HEIGHT;

	std::cout << "Enter in your points: ";

	doodle::create_window(DESIRED_WIDTH, DESIRED_HEIGHT);
	doodle::clear_background(120);
	doodle::no_outline();

	while (std::cin >> Desired_Point_X >> Desired_Point_Y)
		doodle::draw_ellipse(Desired_Point_X, Desired_Point_Y, 8, 8);


	const doodle::Image results = doodle::capture_screenshot_to_image();
	results.SaveToFile(R"(capture_screenshot_to_image.png)");

	return 0;
}