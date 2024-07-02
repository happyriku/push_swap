/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_compressed_minimum_place.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:48:09 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 14:49:45 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_compressed_minimum_place(t_stack **a, int min_num)
{
	t_stack	*tmp;
	int		count;	

	tmp = *a;
	count = 1;
	while (tmp->number != min_num)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
