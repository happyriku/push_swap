/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ascending_arr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:48:18 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 14:48:19 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_ascending(int **arr, int num)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < num)
	{
		j = i + 1;
		while (j < num)
		{
			if ((*arr)[j] == (*arr)[i])
			{
				print_error();
				exit(1);
			}
			if ((*arr)[j] < (*arr)[i])
			{
				tmp = (*arr)[j];
				(*arr)[j] = (*arr)[i];
				(*arr)[i] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*get_ascending_arr(char **argv, int num)
{
	int		i;
	int		*arr;

	arr = (int *)malloc((num) * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (argv[++i])
		arr[i - 1] = ft_atoi(argv[i]);
	sort_ascending(&arr, num);
	i = 0;
	while (i < num)
	{
		if (ft_strncmp(argv[i + 1], ft_itoa(ft_atoi(argv[i + 1])),
				ft_strlen(argv[i + 1])) != 0)
		{
			free(arr);
			print_error();
			exit(1);
		}
		i++;
	}
	return (arr);
}
