/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:07:31 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 16:13:27 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		curr = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = curr;
	}
	*lst = 0;
}
/*
    lst : Endereço do ponteiro para o nodulo.
    del : O endereço da função que irá apagar o conteúdo
    do nódulo.

    Funções externas: free

    Apaga e liberta a memória do nódulo passado, e todos
    os nódulos sucessores, usando a função del e free.
    Finalmente, o pointer da lista deve ser apontado para NULL.
*/
