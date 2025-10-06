/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_oper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:26:34 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/19 08:52:33 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a)
{
	t_node	*first;
	t_node	*second;

	if (!*a || !(*a)->next)
		return ;
	first = *a ;
	second = first->next ;
	first->next = second->next ;
	second->next = first ;
	*a = second ;
	write(1, "sa\n", 3);
}

void	pa(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	write(1, "pa\n", 3);
}

void	ra(t_node **a, int print)
{
	t_node	*first;
	t_node	*i;

	if (!*a || !(*a)->next)
		return ;
	first = *a ;
	*a = (*a)->next ;
	i = *a ;
	while (i->next)
		i = i->next ;
	i->next = first ;
	first->next = NULL ;
	if (print)
		write(1, "ra\n", 3);
}

void	rra(t_node **a, int print)
{
	t_node	*prev;
	t_node	*last;

	if (!*a || !(*a)->next)
		return ;
	prev = NULL;
	last = *a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *a;
	*a = last;
	if (print)
		write(1, "rra\n", 4);
}
