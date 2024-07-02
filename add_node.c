/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:48:48 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 14:48:49 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(int value, int index)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->content = value;
	new_node->next = NULL;
	new_node->number = index;
	return (new_node);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
	{
		print_error();
		exit(1);
	}
	new->next = (*lst);
	(*lst) = new;
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*new_list;

	if (!lst || !new)
	{
		print_error();
		exit(1);
	}
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	new_list = *lst;
	while (new_list->next)
	{
		new_list = new_list->next;
	}
	new_list->next = new;
}

void	add_node(int value, t_stack **a)
{
	t_stack	*new_node;

	new_node = create_node(value, -1);
	if (!new_node)
	{
		print_error();
		exit(1);
	}
	ft_lstadd_back(a, new_node);
}
