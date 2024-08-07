/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:05:26 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 16:14:33 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int main()
{
    t_list root;

    root.content = 5;
    root.next = malloc(sizeof(t_list));
    root.next->content = 6;
    root.next->next = NULL;
    
    printf("1º: %s ", ft_lstlast(&root));
}
*/
