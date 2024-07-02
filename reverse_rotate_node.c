/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:47:14 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 14:50:03 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_node(t_stack **lst, char name)
{
	t_stack	*last_node;
	t_stack	*second_last_node;
	t_stack	*tmp;

	if (!lst || !(*lst))
	{
		print_error();
		exit(1);
	}
	tmp = (*lst);
	while (tmp->next->next)
		tmp = tmp->next;
	second_last_node = tmp;
	while (tmp->next)
		tmp = tmp->next;
	last_node = tmp;
	last_node->next = (*lst);
	(*lst) = last_node;
	second_last_node->next = NULL;
	ft_printf("rr%c\n", name);
}
