/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:01:07 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/19 11:24:34 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	count;

	count = -1;
	while (count++, str[count])
		write(1, &str[count], 1);
}
/*
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Erreur Usage : %s argv[1]",argv[0]);
		return (1);
	}	
	ft_putstr(argv[1]);
}*/