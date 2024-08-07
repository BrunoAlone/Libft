/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:08:27 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 16:20:45 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nova_lst;
	t_list	*box;

	if (!lst)
		return (0);
	nova_lst = 0;
	while (lst)
	{
		box = ft_lstnew(f(lst->content));
		if (!box)
		{
			ft_lstclear(&nova_lst, *del);
			return (0);
		}
		ft_lstadd_back(&nova_lst, box);
		lst = lst->next;
	}
	return (nova_lst);
}

/*
    lst : O endereço de um ponteiro para para um nódulo.
    f : O endereço da função para iterar a lista.
    del : O endereço da funçao para apagar um nódulo se necessário.

    Retorna: Uma nova lista, ou NULL se a alocação falhar.

    Itera a lista lst e aplica a função f no conteúdo
    de cada nódulo. Cria uma nova lista que resulta da aplicação
    da função f. A função del é usada para apagar o conteúdo
    de um nódulo se necessário.
*/
