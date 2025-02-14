/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                          :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:49:03 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/04 14:55:03 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main()
{
	char	src[7] = {1, 2, 3, 4, 5, 6};
	char	dest[10];
	char	src1[7] = {1, 2, 3, 4, 5, 6};
	char	dest1[10];
	
	ft_memmove(dest, src, 4);
	memmove(dest1, src1, 8);
	printf("%s\n", dest);
	printf("%s\n", dest1);
	return(0);
}*/
