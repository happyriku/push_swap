/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:47:05 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 19:22:33 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_nodes(t_stack **lst, char name)
{
	t_stack	*head_node;
	t_stack	*tmp;

	if (!lst || !(*lst))
	{
		print_error();
		exit(1);
	}
	head_node = *lst;
	(*lst) = (*lst)->next;
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = head_node;
	head_node->next = NULL;
	ft_printf("r%c\n", name);
}
