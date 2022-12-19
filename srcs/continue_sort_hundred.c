/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   continue_sort_hundred.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:43:16 by darakely          #+#    #+#             */
/*   Updated: 2022/08/11 16:09:41 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	continue_sort_hundred(t_data *stack, int i)
{
	while ((stack->count - i) >= 0)
	{
		reverse_rotate_b(stack, 0);
		i++;
	}
	push_a(stack);
	if (stack->b->next)
		sort_hundred_node(stack);
}

void	continue_sort(t_data *stack, t_stack *tmp, t_stack *tmp_num, int i)
{
	int	k;

	while (stack->b->data != tmp_num->data)
	{
		i++;
		stack->b = stack->b->next;
	}
	stack->b = tmp;
	k = stack->count / 2;
	stack->count--;
	if (i <= k)
	{
		while (i > 0)
		{
			rotate_b(stack, 0);
			i--;
		}
		push_a(stack);
		if (stack->b->next)
			sort_hundred_node(stack);
	}
	else if (i > k)
		continue_sort_hundred(stack, i);
}
