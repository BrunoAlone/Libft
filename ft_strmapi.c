/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:30:20 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 14:34:40 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	i = 0;
	if (!s || !f)
		return (0);
	dst = (char *)malloc(ft_strlen(s) + 1);
	if (!dst)
		return (0);
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int	main()
{
	//Esta função recebe uma string como parametro
	char	s[] = "Hola Amigo!";
	//f - será a função a aplicar a cada caracter.


	//Retorna a string criada depois da aplicação da função f.
	//Retorna NULL se a alocação falhar.
	char	*dst = ft_strmapi(s, *f);

	//Esta função aplica a função f a cada caracter da string S e passa um ponteiro
	//para o primeiro index da string criada.

	printf("R: %s", dst);
}*/
