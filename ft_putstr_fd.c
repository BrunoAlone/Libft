/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:32:43 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 16:17:49 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main()
{
	//Esta função recebe uma string como parametro.
	char	s[] = "Hola Amigo!";
	//Recebe tambem o descritivo do ficheiro
	//onde escrever a string.
	int	fd = 1;

	//A uníca função externa permitida é a write.
	//Escreve a string s, para o respetivo sitio indicado
	//por fd, seguido de uma quebra de linha.
	ft_putstr_fd(s, fd);
	return (0);
}*/
