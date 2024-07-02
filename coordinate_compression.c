/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:48:40 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 14:49:26 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	coordinate_compression(int	*arr, t_stack **a, int size)
{
	int		index;
	t_stack	*tmp;

	if (!a)
	{
		print_error();
		exit(1);
	}
	index = 0;
	while (index < size)
	{
		tmp = *a;
		while (tmp->content != arr[index])
			tmp = tmp->next;
		tmp->number = index;
		index++;
	}
}
