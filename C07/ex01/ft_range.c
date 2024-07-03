/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:12:11 by raphalme          #+#    #+#             */
/*   Updated: 2024/07/03 13:58:11 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	*tab_result;

	tab_result = malloc((max - min) * sizeof(int));
	count = 0;
	if (tab_result == NULL || min >= max)
		return (NULL);
	while (min < max)
	{
		tab_result[count] = min;
		min++;
		count++;
	}
	return (tab_result);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 3) {printf("Argument Erreur"); return 1;}

	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int count = -1;

	int *result = ft_range(min, max);
	while(count++, (max - min) > count)
	printf("range = %d\n", result[count]);
	free (result);
}*/