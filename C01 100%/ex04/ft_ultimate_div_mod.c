/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphalme <raphalme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:23:57 by raphalme          #+#    #+#             */
/*   Updated: 2024/06/19 22:49:07 by raphalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}

/*
int	main(int agrc, char **argv)
{
	if (argc != 3)
	{
		printf("Erreur Usage : %s argv[1] argv[2]",argv[0]);
		return (1);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("Avant:\nargv[1] = %d\nargv[2] = %d\n", a, b);
	
	ft_ultimate_div_mod(&a, &b);
	printf("Apres :\ndiv = %d\nmod = %d\n", a, b);
}*/