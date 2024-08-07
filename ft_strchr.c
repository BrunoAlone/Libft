/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:36:23 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/08 16:36:49 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}
/*
char	*ft_strchr2(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

int	main()
{
	char	*src = "";
	int	c = '';
	char	*first = ft_strchr(src, c);
	
	char	*src2 = "";
	int	c2 = '';
	char	*first2 = ft_strchr(src2, c2);

	printf("R: %s\n", first);
	printf("R2: %s\n", first2);
}*/
