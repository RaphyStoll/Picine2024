/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:49:43 by raphael           #+#    #+#             */
/*   Updated: 2024/06/25 11:32:16 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
		{
			result = i;
			return (result);
		}
		i++;
	}
	return (0);
}
/*
int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	printf("racine carre de %d = %d", a, ft_sqrt(a));
}*/