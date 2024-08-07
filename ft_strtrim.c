/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:15:55 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 14:49:24 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int	i;

	i = 0;
	dst = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, ft_strlen(s1));
	while (dst[i] == set[0])
	{
		dst++;
		i++;
	}
	i = ft_strlen(dst);
	while (dst[i] == set[0])
	{
		dst--;
		i--;
	}
	return (dst);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char			*strtrim;
	unsigned int	start;
	unsigned int	end;

	start = 0;
	if (!s1)
		return (0);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr((char *)set, s1[start]))
		start++;
	while (end > start && ft_strchr((char *)set, s1[end - 1]))
		end--;
	strtrim = ft_substr(s1, start, (end - start));
	return (strtrim);
}
/*
int	main()
{
	//Esta funcao recebe uma string s1(funcao para ser aparada).
	//char	s1[] = "aabbaaHola Amigoaaaa";

	//set - Os caracteres a serem retirados na string s1.
	//char	*set = "ab";
	//Retorna a string aparada.
	//Retorna NULL caso a alocacao da memoria para 
	//essa string nao seja conseguida
	
	//char	*dst = ft_strtrim(s1, set);
	//A funcao aloca e retorna uma copia
	 //de s1 com os caracteres especificados em 'set'

	//removidos do principio e do fim.
	
	char    s2[] = "aaabbaHola Amigoaaaa";
	char    *set2 = "ab";
	char    *dst2 = ft_strtrim(s2, set2);
	//printf("Resultado: %s\n", dst);
	printf("Resultado2: %s\n", dst2);
}*/
