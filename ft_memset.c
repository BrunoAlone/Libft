/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:44:39 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/03 14:54:55 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		((char *)s)[i] = c;
		i++;
		n--;
	}
	return (s);
}
/*
int	main()
{
	char	s[50];
	char	x[50];
	char	c = 'B';
	char	y = 'C';
	ft_memset(s, c, 5);
	memset(x, y, 5);

	printf("R1: %s\n", s);
	printf("R2: %s\n", x);
	return(0);
}*/
