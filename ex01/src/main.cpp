#include "../inc/phonebook.hpp"

int	main()
{
	std::string input;

	while (1)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			new_contact();
		else if (input == "SEARCH")
			display_contact();
		else if (input == "EXIT")
			exit_program();
		input = "lol";
	}
	return (0);
}