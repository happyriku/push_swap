/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:48:25 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 14:49:38 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_node(t_stack **a)
{
	t_stack	*tmp;

	while (*a != NULL)
	{
		tmp = (*a)->next;
		free(*a);
		*a = tmp;
	}
	return ;
}

void	ft_free(t_stack **a, int *arr)
{
	t_stack	*tmp;

	while (*a != NULL)
	{
		tmp = (*a)->next;
		free(*a);
		(*a) = tmp;
	}
	free(arr);
	return ;
}
