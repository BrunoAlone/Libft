/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:06:51 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/03 11:19:27 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>
#include<ctype.h>

int	main()
{
	char	c = 'f';
	char	x = '/';

	printf("%c, e um caractere alfanumerico: %d\n", c, ft_isalnum(c));
	printf("%c, e um caractere alfanumerico: %d\n", c, isalnum(c));
	printf("%c, nao e um caractere alfanumerico: %d\n", x, ft_isalnum(x));
	printf("%c, nao e um caractere alfanumerico: %d\n", x, isalnum(x));
}*/
