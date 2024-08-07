/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:07:01 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 16:21:50 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

/*
    lst: o Nodulo para ser libertado.
    del: Endereço da função que irá apagar o conteudo.

    Está função pega no nodulo e liberta a memoria do conteudo 
    desse nodulo usando a função del. A memoria de "next" não
    deve ser libertada.
*/
