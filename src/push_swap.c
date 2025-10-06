/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 13:20:24 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/19 13:47:30 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_node **a, t_node **b)
{
	int	size ;
	int	*values ;

	size = stack_size(*a);
	values = extract_values(*a, size);
	assign_indexes(*a, values, size);
	free(values);
	radix_sort(a, b);
}
