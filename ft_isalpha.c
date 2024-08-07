/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:26:21 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/08 16:21:41 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
#include<stdio.h>
#include<ctype.h>

int	main()
{
	char c = 'f';
	char x = '5';

	printf("%c Este e um caractere alfabetico: %d\n", c, ft_isalpha(c));
	printf("%c Este e um caractere alfabetico: %d\n", c, isalpha(c));
	printf("%c Este nao e um caractere alfabetico: %d\n", x, ft_isalpha(x));
	printf("%c Este e um caractere alfabetico: %d\n", x, isalpha(x));
	return(0);
}*/
