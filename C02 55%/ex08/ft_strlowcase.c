/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:36:40 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/20 03:24:07 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
	{
		return (str);
	}
	while (str[count] != '\0')
	{
		if ('A' <= str[count] && str[count] <= 'Z')
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}
/*
int main()
{
    char str[] = "sALUT A TOUS, ce 1 BRAQUAGE A 42 dONNner laRG3nt";
    char *result = ft_strlowcase(str);
    printf("resultat : %s\n", result);
    return(0);
    }
*/
