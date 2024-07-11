#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int verifArg(int argc)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return 1;
	}
	return 0;
}

void ft_rotone(char *str)
{
	int count = 0;
	while(str[count])
	{
		if (str[count] == 'z')
			ft_putchar('a');
		if (str[count] == 'Z')
			ft_putchar('A');
		if (str[count] >= 'a' &&  str[count] < 'z'
			|| str[count] >= 'A' && str[count] < 'Z')
			ft_putchar(str[count] + 1);
		count++;
	}
}

int main(int argc, char **argv)
{
	if (verifArg(argc))
		return 1;
	ft_rotone(argv[1]);
	ft_putchar('\n');
	return 0;
}