/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 23:06:28 by akoaik            #+#    #+#             */
/*   Updated: 2025/06/22 02:13:47 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size ;

	a = NULL ;
	b = NULL ;
	if (argc < 2)
		return (0);
	if (argc == 2)
		parse_split(argv[1], &a);
	else
		parse_args(argc, argv, &a);
	size = stack_size(a);
	if (is_sorted(a))
	{
		free_stack(a);
		return (0);
	}
	if (size <= 5)
		small_sort(&a, &b);
	else
		push_swap(&a, &b);
	free_stack(a);
	free_stack(b);
	return (0);
}

// void	view(t_node *stack)
// {
// 	t_node	*tmp ;

//     if (!stack)
//         write(2, "Stack empty", 11);
// 	tmp = stack;
// 	while (tmp)
// 	{
// 		printf("Value: %d\n", tmp->value);
// 		tmp = tmp->next;
// 	}
// }
