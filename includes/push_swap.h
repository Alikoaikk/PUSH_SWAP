/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 22:29:11 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/28 19:26:14 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next ;
}					t_node;

char	**ft_split(char const *s, char c);
long	ft_atol(const char *str);
void	parse_split(char *arg, t_node **stack);
void	parse_args(int argc, char **argv, t_node **stack);
void	push(t_node **top, int value);
int		pop(t_node **top);
int		peek(t_node *top);
void	sa(t_node **a);
void	pa(t_node **a, t_node **b);
void	ra(t_node **a, int print);
void	sb(t_node **b);
void	pb(t_node **a, t_node **b);
void	rb(t_node **b, int print);
void	ss(t_node **a, t_node **b);
void	rr(t_node **a, t_node **b);
void	rrb(t_node **b, int print);
void	rra(t_node **a, int print);
void	bubble_sort(int *arr, int size);
int		*extract_values(t_node *stack, int size);
void	push_swap(t_node **a, t_node **b);
void	assign_indexes(t_node *stack, int *sorted_arr, int size);
int		stack_size(t_node *stack);
void	radix_sort(t_node **a, t_node **b);
void	append_node(t_node **stack, int value);
t_node	*new_node(int value);
void	free_stack(t_node *stack);
int		*stack_to_array(t_node *stack, int size);
int		find_min_index(int *arr, int size);
void	sort_three(t_node **a);
void	sort_four(t_node **a, t_node **b);
void	sort_five(t_node **a, t_node **b);
void	small_sort(t_node **a, t_node **b);
int		is_duplicate(t_node *stack, int value);

#endif