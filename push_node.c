/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:47:51 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 19:22:19 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_node(t_stack **stack1, t_stack **stack2, char name)
{
	t_stack	*new_node;

	new_node = create_node((*stack1)->content, (*stack1)->number);
	ft_lstadd_front(stack2, new_node);
	delete_stack_top(stack1);
	ft_printf("p%c\n", name);
}
