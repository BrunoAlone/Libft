/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:57:29 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/03 12:04:28 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include<stdio.h>

int	main()
{
	char	str[] = "Hola!";

	printf("R: %ld\n", ft_strlen(str));
	printf("R: %ld\n", strlen(str));
	return(0);
}*/
