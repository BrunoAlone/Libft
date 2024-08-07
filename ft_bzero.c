/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:30:49 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/03 15:43:31 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n != 0)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
		n--;
	}
}
/*
int	main()
{
	char	s[] = "Hola!!";
	char	x[] = "Hola!!";

	ft_bzero(s, 2);
	bzero(x, 2);
	printf("R1: %s\n", s);
	printf("R2: %s\n", x);
	return(0);
}*/
