#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{

	write(1, &c, 1);
}

int arg_verif(int ac)
{
	if(ac != 3)
	{
		ft_putchar('\n');
		return 1;
	}
	return 0;
}

int doublon(char *str, char a, int index)
{
	int count = 0;
	while(count < index)
	{
		if(str[count] == a)
		{
			return 0;
		}
		count++;
	}
	return 1;
}

void oignon(char *s1, char *s2)
{
	int count = 0;
	int count2 = 0;
	while(s1[count])
	{
		if(doublon(s1, s1[count], count))
		{
			ft_putchar(s1[count]);
		}
		count++;
	}
	while(s2[count2])
	{
		if(doublon(s2, s2[count2], count2)
			&& doublon(s1, s2[count2], count))
			{
			ft_putchar(s2[count2]);
			}
		count2++;
	}
}

int main(int argc, char **argv)
{
	if(arg_verif(argc))
	{
		return 1;
	}
	oignon(argv[1], argv[2]);

	ft_putchar('\n');
	return 0;
}