#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_verifArg(int argc)
{
	if(argc != 2)
	{
		ft_putchar('\n');
		return 1;
	}
	return 0;
}

void ft_alpha(char *str)
{
	int count = 0;
	int temp;
	while(str[count])
	{
		temp = 0;
		if (str[count] >= 'a' && str[count] <= 'z')
			temp = str[count] - 'a' + 1;
		if (str[count] >= 'A' && str[count] <= 'Z')
			temp = str[count] - 'A' + 1;
		while(temp > 0)
		{
			ft_putchar(str[count]);
			temp--;
		}
		count++;
	}
}

int main(int argc, char **argv)
{
	if(ft_verifArg(argc))
		return 1;
	ft_alpha(argv[1]);
	ft_putchar('\n');
	return 0;
}