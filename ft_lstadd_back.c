/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:06:19 by brolivei          #+#    #+#             */
/*   Updated: 2022/11/16 16:16:58 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	new->next = NULL;
	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
}
/*
int	main()
{
	t_list	*root = malloc(sizeof(t_list));
	t_list	*new = malloc(sizeof(t_list));
	t_list	*new2 = malloc(sizeof(t_list));
	new2->content = -4;
	new->content = 5;
	//if (root == NULL)
	//	exit(1);
	//root->content = 15;
	//root->next = NULL;

	ft_lstadd_back(&root, new);
	ft_lstadd_back(&root, new2);
	for (t_list *curr = root; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->content);
	}
}*/
