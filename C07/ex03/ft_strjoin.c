/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:56:43 by raphalme          #+#    #+#             */
/*   Updated: 2024/07/03 13:56:57 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	dest_length;
	int	i;

	i = 0;
	dest_length = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

char	*ft_si_vide(int size)
{
	char	*empty_str;

	if (size == 0)
	{
		empty_str = (char *)malloc(sizeof(char));
		empty_str[0] = '\0';
		return (empty_str);
	}
	return (NULL);
}

char	*ft_la_base(int sep_length, int size, char **strs, char *sep)
{
	int		total_length;
	int		i;
	char	*result;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += (size - 1) * sep_length + 1;
	result = (char *)malloc(total_length * sizeof(char));
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
		{
			result = ft_strcat(result, sep);
		}
		i++;
	}
	return (result);
}

char	*ft_strjoin(const int size, char **strs, char *sep)
{
	int		sep_length;
	char	*empty_str;
	char	*result;

	result = NULL;
	sep_length = ft_strlen(sep);
	empty_str = ft_si_vide(size);
	if (empty_str != NULL)
	{
		return (empty_str);
	}
	result = ft_la_base(sep_length, size, strs, sep);
	return (result);
}
/*
int main(int argc, char **argv)
{
	if (argc < 4)
	{
		printf("Merci d'utiliser 4 arguments minimum.\n");
		return 1;
	}

	int size = argc - 2;
	char *sep = argv[1];
	char **strs = argv + 2;

	printf("la string avant la fonction :\n");
	for (int i = 0; i < size; i++)
	{
		printf("%s\n", strs[i]);
	}

	char *result = ft_strjoin(size, strs, sep);

	printf("\nstrjoin resultat:\n%s\n", result);

	free(result);

	return 0;
}*/