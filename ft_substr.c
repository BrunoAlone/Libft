/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:02:32 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/09 16:02:15 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (!dst || !s)
		return (0);
	while (s[start] != '\0' && i < len && start < ft_strlen(s))
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
char	*ft_substr2(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s || !(new_str = (char *)malloc(len + 1)))
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

int	main()
{
	//s: a string passada como parametro para criar a substring.
	char	src[] = "Hola Amigo!";
	//start: o index em que comecar a fazer a substring.
	int	start = 5;
	//len: O meximo de comprimento da substring.
	size_t	c = 4;
	//Retorna a substring.
	//Retorna NULL se a alocacao de memoria falhar.
	//Esta funcao aloca(com o malloc) e retorna a substring de s.
	//A substring comeca no index start e acaba no tamanho maximo defenido por len.
	char    src2[] = "Hola Amigo!";
	int	start2 = 5;
	size_t	c2 = 4;

	char	*dst = ft_substr(src, start, c);
	char	*dst2 = ft_substr2(src2, start2, c2);
	printf("Sub-string resoltante: %s\n", dst);
	printf("Sub-string resoltante2: %s\n", dst2);
}*/
