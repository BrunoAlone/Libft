/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:38:27 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/09 11:04:20 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*dst;

	total = size * nmemb;
	dst = malloc(total);
	if (!dst)
		return (0);
	ft_memset(dst, 0, total);
	return (dst);
}
/*
int	main()
{
	ft_calloc(5, 4);
	calloc(5, 4);
	return(0);
}*/
