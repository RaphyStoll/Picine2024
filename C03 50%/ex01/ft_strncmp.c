/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 01:38:33 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/22 23:34:08 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (0);
	while ((s1[count] || ((s2[count]) && (count < n))))
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}
/*
int main()
{
	char s1 = "helllo";
	char s2 = "";

	printf("%d", ft_strncmp(&s1, &s2, 4));
}*/