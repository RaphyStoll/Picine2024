/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:04:16 by raphael           #+#    #+#             */
/*   Updated: 2024/06/24 22:46:34 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = (nb * ft_recursive_power(nb, power -1));
	return (result);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 3) {printf("erreur"); return 1;}
	int	a = atoi(argv[1]);
	int	b = atoi(argv[2]);
	printf("%d^%d = %d", a, b, ft_recursive_power(a, b));
	return 0;
}*/