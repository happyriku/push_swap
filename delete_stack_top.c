/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_stack_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:48:32 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 14:49:34 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_stack_top(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst || !(*lst))
	{
		print_error();
		exit(1);
	}
	tmp = (*lst)->next;
	free(*lst);
	*lst = tmp;
}
