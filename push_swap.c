/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:47:43 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/05 14:56:36 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_ascending_order(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q push_swap");
// }

int	main(int argc, char **argv)
{
	int			i;
	t_stack		*a;
	t_stack		*b;
	int			*arr;

	if (argc <= 1)
		return (0);
	arr = get_ascending_arr(argv, argc - 1);
	if (!arr)
		return (0);
	i = 0;
	while (++i <= argc - 1)
		add_node(ft_atoi(argv[i]), &a);
	if (check_ascending_order(a) == 0)
	{
		ft_free(&a, arr);
		return (0);
	}
	coordinate_compression(arr, &a, argc - 1);
	if (argc > 6)
		radix_sort(&a, &b, arr[argc - 2], argc - 1);
	else if (argc <= 6)
		sort_five_argm(&a, &b, argc - 1);
	ft_free(&a, arr);
	return (0);
}
