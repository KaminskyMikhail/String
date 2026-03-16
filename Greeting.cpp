#include <iostream>
#include <string>

int main()
{
	char space = ' ';
	std::cout << "Enter name: ";
	std::string name{}; std::cin >> name;

	std::cout << "Enter surname: ";
	std::string surname{}; std::cin >> surname;

	std::string full_name = name + space + surname;

	std::cout << "Hello, " << full_name << std::endl;

	return 0;
}
