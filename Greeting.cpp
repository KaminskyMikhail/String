#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter name: ";
	std::string name{}; std::cin >> name;

	std::cout << "Enter surname: ";
	std::string surname{}; std::cin >> surname;

	std::cout << "Hello, " << name << " " << surname << std::endl;

	return 0;
}
