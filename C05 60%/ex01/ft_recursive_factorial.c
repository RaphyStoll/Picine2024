/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:13:54 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/23 17:15:22 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
int main(int argc, char **argv)
{
	if (argc != 2) { printf("erreur"); return 1;}
	int a = atoi(argv[1]);
	printf("result factoriel de %d = %d", a, ft_recursive_factorial(a));	
}*/