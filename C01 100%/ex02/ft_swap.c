/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:48:03 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/19 22:49:26 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	printf("avant:\nargv[1] = %d\nargv[2] = %d\n", a, b);
	ft_swap(&a, &b);
}*/
