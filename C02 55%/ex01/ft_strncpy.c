/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:32:58 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/19 23:33:32 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
			i++;
	}
	return (dest);
}
/*
int main()
{
	unsigned int n = 15;
	char	src[] = "salut tout le monde";
	char	dest[20];
	write(1, &src, 20);
	printf("\n");
	write(1, &dest, 7);
	printf("\n");
	ft_strncpy(dest, src, n);
	write(1, &src, 20);
	printf("\n");
	write(1, &dest, 20);
	printf("\n");
}
*/
