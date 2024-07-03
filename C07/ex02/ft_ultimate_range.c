/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:58:57 by raphalme          #+#    #+#             */
/*   Updated: 2024/07/03 11:37:07 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	*result;
	int	size;

	size = max - min;
	count = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = malloc(size * sizeof(int));
	if (result == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		result[count] = min;
		min++;
		count++;
	}
	*range = result;
	return (size);
}
/*
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./test min max\n");
        return 1;
    }

    int min = atoi(argv[1]);
    int max = atoi(argv[2]);

    int *range;
    int size = ft_ultimate_range(&range, min, max);

    if (size == -1) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    if (range == NULL) {
        printf("min est supérieur ou égal à max.\n");
        return 1;
    }

    printf("Tableau alloué : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);

    return 0;
}
*/