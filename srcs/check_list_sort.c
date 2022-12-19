/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:05:15 by darakely          #+#    #+#             */
/*   Updated: 2022/08/11 16:37:51 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_list_sort(t_data *stack)
{
	t_stack		*tmp_stack;
	t_stack		*tmp;
	long int	num;

	tmp_stack = stack->a;
	while (stack->a)
	{
		num = stack->a->data;
		tmp = stack->a->next;
		stack->a = tmp;
		while (stack->a)
		{
			if (num > stack->a->data)
			{
				stack->a = tmp_stack;
				return (1);
			}
			stack->a = stack->a->next;
		}
		stack->a = tmp;
	}
	stack->a = tmp_stack;
	return (0);
}
