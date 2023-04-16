#include <iostream>
#include <fstream>
#include <string>

bool	check(char *stack, char *needle)
{
	char c = stack[0];
	std::string::size_type stack_len = strlen(stack);
	std::string::size_type needle_len = strlen(needle);
	for (std::string::size_type i = 0; i < stack_len; i++)
	{
		if (stack[i] != c)
			return (false);
	}
	for (std::string::size_type i = 0; i < needle_len; i++)
	{
		if (needle[i] != c)
			return (false);
	}
	if (stack_len > needle_len)
		return (false);
	return (true);
}

void	replace_not_for_same_char(std::ifstream& input, std::ofstream& output, char **argv)
{
	std::string		line;
	int				counter = 0;

	while (std::getline(input, line))
	{
		std::string::size_type i = 0;
		if (counter != 0)
			output << std::endl;
		for(i = 0; line[i]; i++)
		{
			std::string::size_type j = 0;
			if (line[i] == argv[2][j])
			{
				while (line[i + j] == argv[2][j] && j < strlen(argv[2]))
					j++;
				if (argv[2][j] == '\0')
					line = line.substr(0, i) + std::string(argv[3]) + line.substr(i + strlen(argv[2]), line.length() - i - strlen(argv[2]));
			}
		}
		output << line << std::flush;
		counter++;
	}
}

void	replace_for_same_char(std::ifstream& input, std::ofstream& output, char **argv)
{
	std::string		line;
	int				counter = 0;

	while (std::getline(input, line))
	{
		std::string::size_type i = 0;
		std::string::size_type line_long = line.length();
		if (counter != 0)
			output << std::endl;
		for(i = 0; i < line_long; i++)
		{
			std::string::size_type j = 0;
			if (line[i] == argv[2][j])
			{
				while (line[i + j] == argv[2][j] && j < strlen(argv[2]))
					j++;
				if (argv[2][j] == '\0')
					line = line.substr(0, i) + std::string(argv[3]) + line.substr(i + strlen(argv[2]), line.length() - i - strlen(argv[2]));
			}
		}
		output << line << std::flush;
		counter++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::ifstream	input(argv[1]);
	if (!input)
	{
		std::cout << "can't open the file" << std::endl;
		return (1);
	}
	std::ofstream	output(argv[1] + std::string(".replace"));
	if (!output)
	{
		std::cout << "can't open the file" << std::endl;
		return (1);
	}
	if (std::string(argv[2]).empty())
	{
		std::cout << "replaced string must not be an empty string" << std::endl;
		return (1);
	}
	if (check(argv[2], argv[3]))
		replace_for_same_char(input, output, argv);
	else
		replace_not_for_same_char(input, output, argv);
	return (0);
}