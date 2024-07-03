/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:27:51 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/23 17:52:44 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 3) {printf("erreur"); return 1;}
	int	a = atoi(argv[1]);
	int	b = atoi(argv[2]);
	printf("%d^%d = %d", a, b, ft_iterative_power(a, b));
	return 0;
}*/