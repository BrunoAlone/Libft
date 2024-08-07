/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:26:18 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/03 11:33:13 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>
#include<ctype.h>

int	main()
{
	char	c = '5';
	int	x = 656;

	printf("%c, este e um carectere ascii: %d\n", c, ft_isascii(c));
	printf("%c, este e um carectere ascii: %d\n", c, isascii(c));
	printf("%d, este nao e um carectere ascii: %d\n", x, ft_isascii(x));
	printf("%d, este nao e um carectere ascii: %d\n", x, isascii(x));
	return(0);
}*/
