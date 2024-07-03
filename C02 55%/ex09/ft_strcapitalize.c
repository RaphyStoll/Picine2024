/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 01:25:15 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/20 03:25:10 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
				|| str[i - 1] == '\n'
				|| str[i - 1] == '-' || str[i - 1] == '+')
			&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main (int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Erreur Usage : %s argv[1]",argv[0]);
		return (1);
	}
	printf("Input : %s\n", argv[1]);
	printf("Output : %s\n", ft_strcapitalize(argv[1]));
}*/