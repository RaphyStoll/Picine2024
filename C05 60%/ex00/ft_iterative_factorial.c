/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:42:18 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/23 17:16:07 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		nb--;
		result = result * nb;
	}
	return (result);
}
/*
int main(int argc, char **argv)
{
	if (argc != 2) { printf("erreur"); return 1;}
	int nb = atoi(argv[1]);
	printf("result factoriel de %d = %d", nb ,ft_iterative_factorial(nb));
}*/