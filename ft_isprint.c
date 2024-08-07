/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:41:30 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/03 11:47:59 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

//#include<stdio.h>
//#include<ctype.h>
/*
int	main()
{
	char	c = 'd';
	char	x = 10;

	printf("%c, este e imprimivel: %d\n", c, ft_isprint(c));
	printf("%c, este e imprimivel: %d\n", c, isprint(c));
	printf("%c, este nao e imprimivel: %d\n", x, ft_isprint(x));
	printf("%c, este nao e imprimivel: %d\n", x, isprint(x));
}*/
