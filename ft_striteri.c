/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:30:21 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 16:24:10 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main()
{
	//Esta função recebe um string como parametro:
	char	s[] = "Hola Amigo!";
	//Recebe também uma função que irá aplicar
	//em cada caractere da string.
	
	//Não retorna nada.
	//Aplica a função f a cada caractere da string passada.
	//Cada caractere é passado por 
	//endereço para f, para ser modificado se necessário.
}*/
