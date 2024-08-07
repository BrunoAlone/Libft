/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:26:58 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 15:25:44 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	total_size;
	char	*dst;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2);
	dst = (char *)malloc(total_size + 1);
	if (!dst)
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		dst[j] = s2[i++];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
/*
int	main()
{
	//Os parametros entragues a esta função
	//serão s1(a string prefixo) e s2(a string sufixo).
	char	s1[] = "Hola ";
	char	s2[] = "Amigo!";
	//Retorna uma nova string. 
	//Retorna NULL se a alocação de memoria falhar.
	//A função dela será alocar e returnar
	//uma nova string, que será o resultado
	//da concatenação de s1 e s2.
	char	*dst;

	dst = ft_strjoin(s1, s2);
	printf("Resultado: %s\n", dst);
}*/
