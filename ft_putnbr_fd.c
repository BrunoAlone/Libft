/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:34:22 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 15:35:01 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0 || n > 2147483647)
		return ;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}	
	if (n == 0)
		write (fd, "0", 1);
	if (n > 0)
	{
		if (n > 9)
			ft_putnbr_fd((n / 10), fd);
		write(fd, &"0123456789"[n % 10], 1);
	}
}
/*
int	main()
{
	//Esta função recebe um numero inteiro para escrever.
	int	n = 0;

	//O sitio para onde irá escrever:
	int	fd = 1;


	//A unica função permitida é a write
	//Escreve o número inteiro passado.
	ft_putnbr_fd(n, fd);
	return (0);
}*/
