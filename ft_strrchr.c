/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:43:02 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/08 16:43:41 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return (((char *)s + i));
		i--;
	}
	return (NULL);
}
/*
int	main()
{
	char	*s = "Hola Amiago";
	int	c = 'a';
	char	*last = ft_strrchar(s, c);

	printf("R: %s\n", last);
}*/
