/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:52:35 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/09 14:00:20 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;

	i = 0;
	dst = (char *)malloc(ft_strlen(s) + 1);
	if (!dst)
		return (0);
	while (s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int	main()
{
	char	src[] = "Hola Amigo!";
	char	*dst = ft_strdup(src);
	char    src2[] = "Hola Amigo!";
        char    *dst2 = strdup(src2);

	printf("R: %s\n", dst);
	printf("R: %s\n", dst2);
}*/
