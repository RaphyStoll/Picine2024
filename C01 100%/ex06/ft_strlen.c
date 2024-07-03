/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:22:58 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/19 22:48:37 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Erreur Usage : %s argv[1]",argv[0]);
		return (1);
	}	
	printf("count final : %d",ft_strlen(argv[1]));
}*/