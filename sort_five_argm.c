/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_argm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:46:49 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 14:46:51 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_argm(t_stack **a)
{
	swap_node(a, 'a');
}

void	sort_three_argm(t_stack **a, int min_num, int argm)
{
	if (argm == 2)
	{
		sort_two_argm(a);
		return ;
	}
	if ((*a)->number == min_num && (*a)->next->number == min_num + 2)
	{
		rotate_nodes(a, 'a');
		swap_node(a, 'a');
		reverse_rotate_node(a, 'a');
	}
	else if ((*a)->number == min_num + 1 && (*a)->next->number == min_num)
		swap_node(a, 'a');
	else if ((*a)->number == min_num + 1 && (*a)->next->number == min_num + 2)
		reverse_rotate_node(a, 'a');
	else if ((*a)->number == min_num + 2 && (*a)->next->number == min_num)
		rotate_nodes(a, 'a');
	else if ((*a)->number == min_num + 2 && ((*a)->next->number == min_num + 1))
	{
		swap_node(a, 'a');
		reverse_rotate_node(a, 'a');
	}
}

void	sort_four_argm(t_stack **a, t_stack **b, int argm, int min_num)
{
	int	num;

	if (argm <= 3)
	{
		sort_three_argm(a, 0, argm);
		return ;
	}
	num = get_compressed_minimum_place(a, min_num);
	if (num == 2)
		rotate_nodes(a, 'a');
	else if (num == 3)
	{
		rotate_nodes(a, 'a');
		rotate_nodes(a, 'a');
	}
	else if (num == 4)
		reverse_rotate_node(a, 'a');
	push_node(a, b, 'b');
	sort_three_argm(a, min_num + 1, argm);
	push_node(b, a, 'a');
}

void	sort_five_argm(t_stack **a, t_stack **b, int argm)
{
	int	min;

	if (argm <= 4)
	{
		sort_four_argm(a, b, argm, 0);
		return ;
	}
	min = get_compressed_minimum_place(a, 0);
	if (min == 2)
		rotate_nodes(a, 'a');
	if (min == 3)
	{
		rotate_nodes(a, 'a');
		rotate_nodes(a, 'a');
	}
	else if (min == 4)
	{
		reverse_rotate_node(a, 'a');
		reverse_rotate_node(a, 'a');
	}
	else if (min == 5)
		reverse_rotate_node(a, 'a');
	push_node(a, b, 'b');
	sort_four_argm(a, b, argm, 1);
	push_node(b, a, 'a');
}
