/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:47:35 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/01 19:16:41 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	int				number;
}	t_stack;

int		ft_printf(const char *format, ...);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		*get_ascending_arr(char **argv, int num);
void	free_node(t_stack **a);
void	add_node(int value, t_stack **a);
void	coordinate_compression(int	*arr, t_stack **a, int size);
void	radix_sort(t_stack **a, t_stack **b, int max_num, int num_argm);
void	delete_stack_top(t_stack **lst);
t_stack	*create_node(int value, int index);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_strncmp(char *s1, char *s2, size_t n);
size_t	ft_strlen(const char *s);
void	print_error(void);
void	printlist(t_stack *a);
void	sort_five_argm(t_stack **a, t_stack **b, int argm);
void	swap_node(t_stack **a, char name);
void	rotate_nodes(t_stack **lst, char name);
void	reverse_rotate_node(t_stack **lst, char name);
void	push_node(t_stack **stack1, t_stack **stack2, char name);
int		get_compressed_minimum_place(t_stack **a, int min_num);
void	ft_free(t_stack **a, int *arr);

#endif
