/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:27:43 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/04 10:54:11 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		n--;
		i++;
	}
	return (dst);
}
/*
int	main()
{
	unsigned char	src[] = "Hola Amigo!";
	unsigned char	dest[5];
	unsigned char	src1[] = "Hola Amigo!";
	unsigned char	dest1[5];

	ft_memcpy(dest, src, 4);
	memcpy(dest1, src1, 4);
	printf("%s\n", dest);
	printf("%s\n", dest1);
	return(0);
}*/
