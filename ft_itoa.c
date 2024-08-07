/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:31:55 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 14:57:11 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_qtnum(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i += 1;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		qn;
	int		i;

	i = 0;
	qn = ft_qtnum(n);
	dst = malloc(sizeof(char) * (qn + 1));
	if (!dst)
		return (NULL);
	i = qn--;
	dst[i] = '\0';
	i = 1;
	if (n < 0)
	{
		dst[0] = '-';
		i = -1;
	}
	if (n == 0)
		dst[qn] = '0';
	while (n != 0)
	{
		dst[qn--] = ((n % 10) * i) + 48;
		n = n / 10;
	}
	return (dst);
}
/*
int	main()
{
	//A funcao itoa recebe um numero inteiro.
	int	n = 9;

	//A funcao retorna uma string que representa o numero inteiro.
	//Null se a alocacao de memoria falhar.
	//(Ira ser usada a funcao malloc)
	
	char	*num = ft_itoa(n);

	//A funcao ira alocar memoria e returnar a
	//string que representara o numero inteiro
	//recebido, incluindo numeros negativos.
	
	printf("Resultado: %s\n", num);
}*/
