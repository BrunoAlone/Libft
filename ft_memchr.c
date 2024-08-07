/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:56:33 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/08 14:11:46 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*char_s;

	i = 0;
	*char_s = (unsigned char *) s;
	if (!s)
		return (NULL);
	while (char_s[i] != c && i < n)
	{
		i++;
	}
	if (i == n)
		return (NULL);
	return (((char *)s + i));
}

int	main()
{
	char	src[] = "Hla Amigo!";
	int	c = '!';
	char    src2[] = "Hla Amigo!";
        int     c2 = '!';
	//int	src[] = {0, 1, 2, 3, 4, 5};
	//int	c = 3;
	//int     src2[] = {0, 1, 2, 3, 4, 5};
        //int     c2 = 3;

	char	*pos1 = memchr(src, c, sizeof(src));
	char	*pos2 = ft_memchr(src2, c2, sizeof(src2));
	printf("Ori_fun: %s\n", pos1);
	printf("My_fun: %s\n", pos2);
}*/
