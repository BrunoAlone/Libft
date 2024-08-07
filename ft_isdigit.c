/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:54:00 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/03 10:59:45 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>
#include<ctype.h>

int	main()
{
	char c = '5';
	char x = 't';

	printf("%c, e um caractere numerico: %d\n", c, ft_isdigit(c));
	printf("%c, e um caractere numerico: %d\n", c, isdigit(c));
	printf("%c, e um caractere numerico: %d\n", x, ft_isdigit(x));
	printf("%c, e um caractere numerico: %d\n", x, isdigit(x));
	return(0);
}*/
