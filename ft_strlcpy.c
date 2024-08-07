/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:56:40 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/08 10:53:08 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (size == 0 && ft_strlen(dst) == 0)
		return (0);
	while (src[i])
		i++;
	if (size != 0)
	{
		while (src[x] != '\0' && x < (size - 1))
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (i);
}
/*
int	main()
{
	char	src[] = "Hola Amigo!";
	char	dest[20];
	//char	src2[] = "Hola Amigo!";
	//char	dest2[20];

	ft_strlcpy(dest, src, sizeof(src));
	//ft_strlcpy2(dest2, src2, sizeof(src2));
	printf("My_Fun: %s\n", dest);
	//printf("Ori_Fun: %s\n", dest2);
}*/
