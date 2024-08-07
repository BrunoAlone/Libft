/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:33:31 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 15:33:55 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
		write(fd, "\n", 1);
	}
}
/*
int	main()
{
	//Esta função irá receber uma string:
	char	s[] = "Hola Amigo!";
	//O descritivo do feicheiro para o qual irá escrever.
	int	fd = 1;

	//A unica função permitida é a write.
	ft_putendl_fd(s, fd);
	return (0);
}*/
