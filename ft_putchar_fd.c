/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:31:37 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 15:32:05 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	//Esta função rece um caracter que irá escrever.
	char	c = 'A';
	//O endereço do arquivo no qual irá escrever.
	int	fd = 1;

	//A uníca função externa permitida é a Write.
	//Escreve o caractere passado c, para o ficheiro fd dado.
	ft_putchar_fd(c, fd);
	printf("\n");
}*/
