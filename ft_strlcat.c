/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:06:41 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/08 12:21:12 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;
	size_t	total;
	size_t	n;

	if ((dst == NULL) && (size == 0))
		return (0);
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (size < dst_size)
		return (ft_strlen(src) + size);
	i = 0;
	n = size - dst_size;
	total = dst_size + src_size;
	while (((i + 1) < n) && (*(src + i) != '\0'))
	{
		*(dst + (dst_size + i)) = *(src + i);
		i++;
	}
	(*(dst + (dst_size + i)) = '\0');
	return (total);
}

/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;
	size_t	total;

	if (size == 0)
		return (ft_strlen(src));
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size > dst_size)
		total = dst_size + src_size;
	else
		total = size + src_size;
	i = 0;
	while (src[i] != '\0' && (dst_size + 1) < size)
	{
		dst[dst_size] = src[i];
		dst_size++;
		i++;
	}
	dst[dst_size] = '\0';
	return (total);
}
*/
/*
int	main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	dest[20];
	//char	src2[] = "Hola Amigo!";
	//char	dest2[20];

	ft_strlcat(dest, src, sizeof(src));
	//ft_strlcpy2(dest2, src2, sizeof(src2));
	printf("My_Fun: %s\n", dest);
	printf("Return: %ld", ft_strlcat(dest, src, 5));
	//printf("Ori_Fun: %s\n", dest2);
}*/
