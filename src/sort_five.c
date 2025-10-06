/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 22:27:35 by akoaik            #+#    #+#             */
/*   Updated: 2025/07/09 22:27:37 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **a)
{
	int	first ;
	int	second ;
	int	third ;

	first = (*a)->value ;
	second = (*a)->next->value ;
	third = (*a)->next->next->value ;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a, 1);
	}
	else if (first > second && second < third && first > third)
		ra(a, 1);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a, 1);
	}
	else if (first < second && second > third && first > third)
		rra(a, 1);
}

int	find_min_index_stack(t_node *a)
{
	int		min;
	int		index;
	int		min_index;
	t_node	*current;

	min = a->value ;
	index = 0 ;
	min_index = 0 ;
	current = a ;
	while (current)
	{
		if (current->value < min)
		{
			min = current->value;
			min_index = index;
		}
		current = current->next;
		index++;
	}
	return (min_index);
}

void	sort_four(t_node **a, t_node **b)
{
	int	min_index;

	min_index = find_min_index_stack(*a);
	while (min_index--)
		ra(a, 1);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_node **a, t_node **b)
{
	int	min_index ;

	min_index = find_min_index_stack(*a);
	while (min_index--)
		ra(a, 1);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}

void	small_sort(t_node **a, t_node **b)
{
	int	size ;

	size = stack_size(*a);
	if (size == 1)
		return ;
	else if (size == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a);
	}
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
}
