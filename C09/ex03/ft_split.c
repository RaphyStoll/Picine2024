#include <stdlib.h>

//* Compte le nombre de mots dans la chaîne de caractères
int	ft_count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		//? Ignore les séparateurs (tabulation, espace, nouvelle ligne)
		while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
			i++;
		//? Si un mot est trouvé, incrémente le compteur
		if (str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
		{
			count++;
			//? Avance jusqu'à la fin du mot
			while (str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
				i++;
		}
	}
	return (count);
}

//* Alloue de la mémoire pour un mot et le copie depuis str
char	*ft_malloc_word(char *str)
{
	int		i;
	char	*word;
	int		len;

	i = 0;
	//? Calcule la longueur du mot
	while (str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
		i++;
	len = i + 1;
	//? Alloue de la mémoire pour le mot (+1 pour le '\0')
	word = (char *)malloc(sizeof(char) * len);
	if (!word)
		return (NULL);
	i = 0;
	//? Copie le mot dans la nouvelle chaîne
	while (str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

//* Fonction principale pour découper str en mots
char	**ft_split(char *str)
{
	int		nb_words;
	char	**tab;
	int		i;
	int		j;

	//? Compte le nombre de mots dans str
	nb_words = ft_count_words(str);
	//? Alloue de la mémoire pour le tableau de mots (+1 pour le NULL final)
	tab = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		//? Ignore les séparateurs (tabulation, espace, nouvelle ligne)
		while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
			i++;
		//? Si un mot est trouvé, alloue de la mémoire et copie le mot
		if (str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
		{
			tab[j] = ft_malloc_word(&str[i]);
			if (!tab[j])
				return (NULL);
			j++;
			//? Avance jusqu'à la fin du mot
			while (str[i] && str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
				i++;
		}
	}
	//? Termine le tableau par un pointeur NULL
	tab[j] = NULL;
	return (tab);
}