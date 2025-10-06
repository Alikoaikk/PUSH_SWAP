/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 11:45:30 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/20 18:38:54 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0 ;
	while (i < size - 1)
	{
		j = 0 ;
		while (j < size - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	*extract_values(t_node *stack, int size)
{
	int	*arr ;
	int	i;

	arr = malloc(sizeof(int) * size);
	i = 0 ;
	while (stack)
	{
		arr[i++] = stack->value ;
		stack = stack->next ;
	}
	bubble_sort(arr, size);
	return (arr);
}

void	assign_indexes(t_node *stack, int *sorted_arr, int size)
{
	int		i;

	while (stack)
	{
		i = 0;
		while (i < size)
		{
			if (stack->value == sorted_arr[i])
			{
				stack->index = i;
				break ;
			}
			i++;
		}
		stack = stack->next;
	}
}

int	max_bits(int max_index)
{
	int	bits;

	bits = 0 ;
	while ((max_index >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_node **a, t_node **b)
{
	int	i ;
	int	j;
	int	size ;
	int	bit_max;

	i = 0 ;
	size = stack_size(*a);
	bit_max = max_bits(size - 1);
	while (i < bit_max)
	{
		j = 0;
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				ra(a, 1);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
