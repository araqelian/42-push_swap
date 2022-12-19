/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:19:24 by darakely          #+#    #+#             */
/*   Updated: 2022/08/11 17:58:21 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_range(long int sz)
{
	long int	range;

	range = 0;
	if (sz <= 100)
	{
		range = sz * 15;
		range /= 100;
	}
	else if (sz > 100)
	{
		range = sz * 30;
		range /= 500;
	}
	return (range);
}

void	sort_hundred_node(t_data *stack)
{
	t_stack		*tmp_num;
	t_stack		*tmp;
	long int	num;
	int			i;

	i = 0;
	tmp = stack->b;
	stack->b = tmp;
	tmp_num = NULL;
	num = stack->b->data;
	while (stack->b)
	{
		if (stack->b->data >= num)
		{
			num = stack->b->data;
			tmp_num = stack->b;
		}
		stack->b = stack->b->next;
	}
	stack->b = tmp;
	continue_sort(stack, tmp, tmp_num, i);
}

void	check_index(t_data *stack)
{
	t_stack	*tmp;
	t_stack	*min;
	int		count;

	tmp = stack->a;
	min = stack->a;
	count = stack->const_count;
	while (stack->a)
	{
		stack->a->index = -1;
		stack->a = stack->a->next;
	}
	stack->a = tmp;
	while (count--)
	{
		min = norm_index(stack, min, tmp);
		stack->a = tmp;
	}
	stack->a = tmp;
}

t_stack	*norm_index(t_data *stack, t_stack *min, t_stack *tmp)
{
	static int	i;

	while (stack->a)
	{
		if (min->data > stack->a->data && stack->a->index == -1)
			min = stack->a;
		stack->a = stack->a->next;
	}
	stack->a = tmp;
	min->index = i;
	while (stack->a)
	{
		if (stack->a->index == -1)
		{
			min = stack->a;
			break ;
		}
		stack->a = stack->a->next;
	}
	i++;
	return (min);
}

void	head_algorithm(t_data *stack)
{
	long int	count;
	int			range;
	int			size;

	size = stack->count;
	count = 0;
	check_index(stack);
	while (stack->a)
	{
		range = find_range(size);
		if (stack->a->index <= count)
		{
			push_b(stack);
			rotate_b(stack, 0);
			count++;
		}
		else if (stack->a->index <= count + range)
		{
			push_b(stack);
			count++;
		}
		else
			rotate_a(stack, 0);
	}
	sort_hundred_node(stack);
}
