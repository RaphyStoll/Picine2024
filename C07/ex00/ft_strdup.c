/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 01:07:36 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/26 12:12:22 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *c)
{
	int	count;

	count = 0;
	while (c[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		count;

	count = 0;
	dest = malloc ((ft_strlen(src) + 1) * sizeof(char));
	while (src[count])
	{
	dest[count] = src[count];
	count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int main(int argc, char **argv)
{
	if(argc != 2) {printf("Argument error"); return 1;}
	printf("src = %s\ndest = %s\n", argv[1], ft_strdup(argv[1]));
}*/