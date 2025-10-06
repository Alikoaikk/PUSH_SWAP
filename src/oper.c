/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:17:00 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/19 09:50:10 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_node **a, t_node **b)
{
	t_node	*first;
	t_node	*second;

	if (*a && (*a)->next)
	{
		first = *a;
		second = first->next;
		first->next = second->next;
		second->next = first;
		*a = second;
	}
	if (*b && (*b)->next)
	{
		first = *b;
		second = first->next;
		first->next = second->next;
		second->next = first;
		*b = second;
	}
	write(1, "ss\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}

void	rrr(t_node **a, t_node **b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 5);
}
