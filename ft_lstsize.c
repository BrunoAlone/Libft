/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:04:49 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 16:11:01 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{	
		lst = lst->next;
		i++;
	}
	return (i);
}

// Esta função recebe um ponteiro para o inicio da lista.
// Ela retornará o comprimento da lista.
// Não é permitido usar funções externas.
// Ela apenas conta o número de nós da lista.
