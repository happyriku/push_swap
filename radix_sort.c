/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:47:25 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/02 14:52:26 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_bit(t_stack **a, int max_num)
{
	int		count;
	t_stack	*tmp;
	int		number;

	tmp = (*a);
	while (tmp->content != max_num)
		tmp = tmp->next;
	number = tmp->number;
	count = 0;
	while (number)
	{
		count++;
		number >>= 1;
	}
	return (count);
}

void	radix_sort(t_stack **a, t_stack **b, int max_num, int num_argm)
{
	int	i;
	int	j;
	int	max_bit;

	max_bit = count_bit(a, max_num);
	i = 0;
	while (i < max_bit)
	{
		j = 0;
		while (j < num_argm)
		{
			if ((((*a)->number) >> i & 1) == 0)
				push_node(a, b, 'b');
			else
				rotate_nodes(a, 'a');
			j++;
		}
		while (*b != NULL)
			push_node(b, a, 'a');
		i++;
	}
}
