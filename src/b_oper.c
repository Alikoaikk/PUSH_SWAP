/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_oper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:12:51 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/19 08:52:48 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_node **b)
{
	t_node	*first;
	t_node	*second;

	if (!*b || !(*b)->next)
		return ;
	first = *b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	write(1, "sb\n", 3);
}

void	pb(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}

void	rb(t_node **b, int print)
{
	t_node	*first;
	t_node	*i;

	if (!*b || !(*b)->next)
		return ;
	first = *b;
	*b = (*b)->next;
	i = *b;
	while (i->next)
		i = i->next;
	i->next = first;
	first->next = NULL;
	if (print)
		write(1, "rb\n", 3);
}

void	rrb(t_node **b, int print)
{
	t_node	*prev;
	t_node	*last;

	if (!*b || !(*b)->next)
		return ;
	prev = NULL;
	last = *b;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *b;
	*b = last;
	if (print)
		write(1, "rrb\n", 4);
}
