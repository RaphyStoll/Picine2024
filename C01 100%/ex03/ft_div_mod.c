/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:59:54 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/19 22:39:02 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main (int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Erreur Usage : %s argv[1] argv[2]",argv[0]);
		return (1);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = 0;
	int d = 0;
	printf("Avant:\nargv[1] = %d\nargv[2] = %d\n", a, b);
	printf("div = %d\nmod = %d\n", c, d);
	
	ft_div_mod(a, b, &c, &d);
	printf("Apres :\ndiv = %d\nmod = %d\n", c, d);
}*/