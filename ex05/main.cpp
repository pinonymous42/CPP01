#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	std::string line;
	std::cout << "Please enter the level: " << std::flush;
	if (!std::getline(std::cin, line))
		std::exit(1);
	harl.complain(line);
	return (0);
}