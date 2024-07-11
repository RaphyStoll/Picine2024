#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	count;

	count = -1;
	while (count++, str[count])
		write(1, &str[count], 1);
}