/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:56:16 by darakely          #+#    #+#             */
/*   Updated: 2022/08/11 17:59:36 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	continue_five_node_2(t_data *stack)
{
	if (stack->a->data > stack->a->next->next->data)
	{
		swap_a(stack, 0);
		rotate_a(stack, 0);
		swap_a(stack, 0);
		reverse_rotate_a(stack, 0);
	}
	else if (stack->a->data > stack->a->next->data)
		swap_a(stack, 0);
}

static void	continue_five_node(t_data *stack)
{
	if (stack->a->data > stack->a->next->next->next->data)
		rotate_a(stack, 0);
	else if (stack->a->data > stack->a->next->next->data)
	{
		reverse_rotate_a(stack, 0);
		swap_a(stack, 0);
		rotate_a(stack, 0);
		rotate_a(stack, 0);
	}
	else if (stack->a->data > stack->a->next->data)
		swap_a(stack, 0);
	if (stack->count == 4)
		return ;
	push_a(stack);
	if (stack->a->data > stack->a->next->next->next->next->data)
		rotate_a(stack, 0);
	else if (stack->a->data > stack->a->next->next->next->data)
	{
		reverse_rotate_a(stack, 0);
		swap_a(stack, 0);
		rotate_a(stack, 0);
		rotate_a(stack, 0);
	}
	continue_five_node_2(stack);
}

void	five_node(t_data *stack)
{
	if (stack->count == 5)
	{
		if (stack->a->data > stack->a->next->next->next->next->data)
		{
			reverse_rotate_a(stack, 0);
			check_list_sort(stack);
		}
		push_b(stack);
		push_b(stack);
	}
	else
	{
		if (stack->a->data > stack->a->next->next->next->data)
		{
			reverse_rotate_a(stack, 0);
			check_list_sort(stack);
		}
		push_b(stack);
	}
	three_node(stack);
	push_a(stack);
	continue_five_node(stack);
}

void	three_node(t_data *stack)
{
	if (stack->a->data > stack->a->next->data
		&& stack->a->data < stack->a->next->next->data)
		swap_a(stack, 0);
	else if (stack->a->data > stack->a->next->data
		&& stack->a->next->data > stack->a->next->next->data)
	{
		swap_a(stack, 0);
		reverse_rotate_a(stack, 0);
	}
	else if (stack->a->data > stack->a->next->data
		&& stack->a->next->data < stack->a->next->next->data)
		rotate_a(stack, 0);
	else if (stack->a->data < stack->a->next->data
		&& stack->a->next->data > stack->a->next->next->data
		&& stack->a->data < stack->a->next->next->data)
	{
		reverse_rotate_a(stack, 0);
		swap_a(stack, 0);
	}
	else if (stack->a->data < stack->a->next->data
		&& stack->a->next->data > stack->a->next->next->data)
		reverse_rotate_a(stack, 0);
	return ;
}

void	get_algorithm(t_data *stack)
{
	t_stack	*tmp;

	tmp = stack->a;
	if (stack->count == 2)
	{
		if (stack->a->data > stack->a->next->data)
		{
			swap_a(stack, 0);
			stack->a = tmp;
		}
	}
	else if (stack->count == 3)
		three_node(stack);
	else if (stack->count >= 4 && stack->count <= 5)
		five_node(stack);
	else if (stack->count >= 6)
		head_algorithm(stack);
	return ;
}
