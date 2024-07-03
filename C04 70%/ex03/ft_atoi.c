/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:17:40 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/22 23:09:39 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	ft_isspace(char c)
{
	return (c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\r'
		|| c == '\v'
		|| c == '\f');
}

char	ft_isnegativ(char *str)
{
	int	count;
	int	neg_count;

	neg_count = 0;
	count = 0;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
		{
			neg_count++;
		}
		count++;
	}
	return (*str);
}

int	ft_atoi(char *str)
{
	int	count;
	int	isneg_count;
	int	number;

	count = 0;
	isneg_count = 0;
	number = 0;
	while (ft_isspace (str[count]))
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			isneg_count++;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		number = number * 10 + (str[count] - '0');
		count++;
	}
	if (isneg_count % 2)
		return (-number);
	return (number);
}
/*
int	main(int argc, char **argv)
{
	if(argc != 2)
		return 1;
	printf("ft_atoi : %d\n", ft_atoi(argv[1]));
	printf("atoi : %d\n", atoi(argv[1]));
}*/