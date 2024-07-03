/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:34:58 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/20 03:23:56 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
	{
		return (str);
	}
	while (str[count] != '\0')
	{
		if ('a' <= str[count] && str[count] <= 'z')
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}
/*
int main()
{
	char str[] = "Salut a Tous, ce 1 braquage a 42 donner larg3nt";
	char *result = ft_strupcase(str);	
	printf("resultat : %s\n", result);
	return(0);
	}
*/
