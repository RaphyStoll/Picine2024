/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:34:14 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/19 23:34:17 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if ((str[count] >= 32) && (str[count] <= 126))
			count++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = {15};
	printf ("test 1 = ");
	printf("%d", ft_str_is_printable(str));
}
*/
