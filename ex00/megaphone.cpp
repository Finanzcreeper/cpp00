#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
	int	c = 1;
	int	i = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(c < argc)
	{
		while(argv[c][i] != '\0')
		{
			if (islower(argv[c][i]))
				std::cout << char(toupper(argv[c][i++]));
			else
				std::cout << (argv[c][i++]);
		}
		i = 0;
		c++;
	}
	std::cout << std::endl;
	return (0);
}
