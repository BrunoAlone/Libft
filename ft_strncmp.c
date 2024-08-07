/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:38:31 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/08 16:38:59 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*
int	ft_strncmp2(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n && s1[i]) || s2[i])
	{
		if (s1[i] == s2[i])
		{
			if (i == (n - 1))
				return (0);
		}
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

int	main()
{
	char	s1[] = "Hola Amigo!";
	char	s2[] = "Hola2 Amigo!";
	char	s12[] = "Hola Amigo!";
	char	s22[] = "Hola2 Amigo!";

	printf("R: %d\n", ft_strncmp(s1, s2, 4));
	printf("R2: %d\n", ft_strncmp2(s12, s22, 4));
}*/
