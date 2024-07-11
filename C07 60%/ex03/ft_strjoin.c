char	*ft_strjoin(int size, char **strs, char *sep)
{
	
}

int main()
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
}