#include <iostream>

int WINDOW_WIDTH;
int WINDOW_HEIGHT;

int main(void)
{
	std::cout << "Enter in desired width: ";
	std::cin >> WINDOW_WIDTH >> std::endl;
	std::cout << "Enter in desired height: ";
	std::cin >> WINDOW_HEIGHT >> std::endl;
	std::cout << "Enter in your points: ";

	std::cout << WINDOW_WIDTH << ", " << WINDOW_HEIGHT;

}