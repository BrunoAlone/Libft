/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:57:18 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 14:44:57 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_palavras(const char *s, char c)
{
	int	i;
	int	num_palavras;

	i = 0;
	num_palavras = 0;
	while (*s != '\0')
	{
		if (*s != c && i == 0)
		{
			i = 1;
			num_palavras++;
		}	
		else if (*s == c)
			i = 0;
		s++;
	}
	return (num_palavras);
}

static char	*impressao_palavra(const char *s, int i, int tamanho)
{
	char	*dst;
	int		j;

	j = 0;
	dst = malloc((tamanho + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (j < tamanho)
	{
		dst[j++] = s[i];
		i++;
	}
	dst[j] = '\0';
	return (dst);
}

static int	ft_tamanho_palavra(const char *s, int i, char c)
{
	int	tamanho;

	tamanho = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		tamanho++;
	}
	return (tamanho);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		num_string;
	int		num_palavras;
	int		tam_palavra;
	char	**array;

	i = 0;
	num_palavras = ft_num_palavras(s, c);
	array = malloc((num_palavras + 1) * sizeof(char *));
	if (!s || !array)
		return (0);
	num_string = 0;
	while (num_palavras > 0)
	{
		if (s[i] != c)
		{
			tam_palavra = ft_tamanho_palavra(s, i, c);
			array[num_string++] = impressao_palavra(s, i, tam_palavra);
			i = tam_palavra + i;
			num_palavras--;
		}
		i++;
	}
	array[num_string] = 0;
	return (array);
}
/*
int	main(void)
{
	char		s;
	char const	*str = "   lorem   ipsum dolor    
	sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	int			i;
	char		**array;

	s = ' ';
	i = 0;
	array = ft_split(str, s);
	
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
}*/
