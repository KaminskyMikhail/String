#include <iostream>
#include <string>

int main()
{
	std::string prize_word{ "keyboard" };
	std::string some_word{};

	while (prize_word != some_word)
	{
		std::cout << "Guess the word: ";
		std::cin >> some_word;
		if (prize_word != some_word)
			std::cout << "Uncorrect\n";
		else
		{
			std::cout << "Correct! You win! The word is keyboard." << std::endl;
		}
	}

	return 0;
}